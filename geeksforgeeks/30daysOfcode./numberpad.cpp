// #Day4
// problem statement is as following :
// Given a sentence in the form of a string in uppercase, convert it into its equivalent mobile numeric keypad sequence.
// Like
// A = 2 B=22 C=222; D=3 ...................... and so on.


#include <bits/stdc++.h>
using namespace std;

int get_code(int index){
    int code[]=
     {
        2,22,222,3,33,333,4,44,444,5,55,555,6,66,
        666,7,77,777,7777,8,88,888,9,99,999,9999
     };
     return code[index];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        for(char alpha : str){
            if(alpha == ' ') {
                cout <<0;
            }
            int i = int(alpha) - 65; // used to set A as 0
            cout << get_code(i);
        }
        cout << "\n";
    }
    return 0;
}
