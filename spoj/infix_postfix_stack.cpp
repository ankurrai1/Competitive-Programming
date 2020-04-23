// conversion of infix expression to post fix expression is a simple opration it can be done using stack
// here we are taking care of paranthesis as well to and exponentioals as well

#include<bits/stdc++.h>

using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

string get_postfix(string s){
    unordered_map<char, int> pref;
    pref['^'] = 5;
    pref['/'] = 4;
    pref['*'] = 3;
    pref['+'] = 2;
    pref['-'] = 1;
    stack<char> st;
    string final = "";
    for(auto e : s){
        if(e == '(') st.push(e);
        else if(!st.empty() && e == ')'){
            while( st.top() != '('){
                final += st.top();
                st.pop();
            }
            st.pop();
        }
        else if(pref[e]){
            while(!st.empty() && pref[st.top()] >= pref[e]){
                final += st.top();
                st.pop();
            }
            st.push(e);
        }
        else final += e;
    }
    while (!st.empty()){
        final += st.top();
        st.pop();
    }
    return final;
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
