// conversion of infix expression to post fix expression is a simple opration it can be done using stack
// here we are taking care of paranthesis as well to and exponentioals as well

#include<bits/stdc++.h>

using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int pref[5] = {'^','/','*','+','-'};


string get_postfix(string in){
  unordered_map<char, int> pref;
  pref['^'] = 5;
  pref['/'] = 4;
  pref['*'] = 3;
  pref['+'] = 2;
  pref['-'] = 1;

  stack<char> s;

  string postfix = "";

  for (int i = 0; i < in.size(); i++){

    if(pref[in[i]] || in[i] == '(' || in[i] == ')'){
        while(!s.empty() && pref[s.top()] >= pref[in[i]]){
            postfix += s.top();
            s.pop();
        }
        s.push(in[i]);
    }
    else postfix += in[i];
  }
  while (!s.empty()){
    postfix += s.top();
    s.pop();
  }
  return postfix;
}

int main(){
  SPEED;
  int t;
  cin >> t;
  while(t--){
    string infi;
    cin >> infi;
    string postfix = get_postfix(infi);
    cout << postfix <<"\n";
  }
  return 0;
}
