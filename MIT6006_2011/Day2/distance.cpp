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

int compute_inner_product(FreqMap doc1, FreqMap doc2){
    int sum = 0;
    for(auto ele : doc1){
        if(doc2[ele.first]) sum += (doc1[ele.first] * doc2[ele.first]);
    }
    return sum;
}

double compute_distance(FreqMap doc1, FreqMap doc2){
    auto innerProduct = compute_inner_product(doc1, doc2);
    auto denominator = sqrt(compute_inner_product(doc1, doc1) * compute_inner_product(doc2, doc2));
    return cos(innerProduct/denominator);
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

    cout << "document distance is :" <<( compute_distance(wf1, wf2)) << endl;

    return 0;
} 

// it will lie between .5 to 1;
// .5 to most of them are matching
// near 1 all are no common match
