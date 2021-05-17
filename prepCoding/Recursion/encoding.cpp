#include <bits/stdc++.h>
using namespace std;


void encodings(string str, string res){
    if(str.size() == 0){
        cout << res << endl;
        return;
    }
    if(str.size() == 1){
        if(str[0] == '0') return;
        else{
            res += (char)('a' + ( str[0] - '0') - 1);
            cout << res << endl;
            return;
        }
    }
    string num1 = str.substr(0, 1);
    if(num1 == "0") return;
    else{
        string n = str.substr(1);
        
        string response = res + (char)('a' + ( stoi(num1) - 1));
        encodings(n, response);
    }
    string num2 = str.substr(0, 2);
    if(num2.at(0) == '0' || stoi(num2) > 26) return;
    else{
        string n = str.substr(2);
        string response = res + (char)('a' + ( stoi(num2) - 1));
        encodings(n, response);
    }
}

void printEncodings(char arr[], string str, string res){
    if(str.size() == 0){
        cout << res << endl;
        return;
    }
    if(str.size() == 1){
        if(str[0] == '0') return;
        else{
            res += arr[(str[0] - '0') - 1];
            cout << res << endl;
            return;
        }
    }
    string num1 = str.substr(0, 1);
    if(num1 == "0") return;
    else{
        string n = str.substr(1);
        string response = res + arr[stoi(num1) - 1];
        printEncodings(arr, n, response);
    }
    string num2 = str.substr(0, 2);
    if(num2.at(0) == '0' || stoi(num2) > 26) return;
    else{
        string n = str.substr(2);
        string response = res + arr[stoi(num2) - 1];
        printEncodings(arr, n, response);
    }
}

int main(){
    char arr[26] = {'a', 'b', 'c', 'd' , 'e', 'f' ,'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    printEncodings(arr, "123","");
    encodings("123" ,"");
    return 0;
}