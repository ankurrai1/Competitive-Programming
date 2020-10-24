# include <bits/stdc++.h>
#include <fstream>

using namespace std;
typedef map<std::string, int> FreqMap;


void removeSpecialCharacter(string &s) 
{ 
    for (int i = 0; i < s.size(); i++) { 
        s[i] = tolower(s[i]);
        if (s[i] < 'a' || s[i] > 'z'){
            s.erase(i, 1);  
            i--; 
        } 
    } 
} 

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ifstream file; 
    string word, t, q, filename; 
    FreqMap wf1, wf2;

    // reading file 1;
    filename = "./textFiles/test1.txt"; 
    file.open(filename.c_str()); 
    while (file >> word) 
    { 
        removeSpecialCharacter(word);
        ++wf1[word];
    } 
    file.close();

    // reading file 2
    filename = "./textFiles/test2.txt"; 
    file.open(filename.c_str()); 
    while (file >> word) 
    { 
        removeSpecialCharacter(word);
        ++wf2[word];
    } 
    file.close();

    return 0;
} 