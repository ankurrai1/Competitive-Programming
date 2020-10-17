// problem statement is as following

//Given an integer n, your task is to complete the function convertToRoman which prints the corresponding roman number of n.


// solution function is as following

#include <bits/stdc++.h>

using namespace std;


void convertToRoman(int n)
{
string thousand[] = {"","M","MM","MMM","MMMM"};
string hundred[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM","M"};
string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC","C"};
string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX","X"};

string ans;
ans += thousand[n/1000];
n = n%1000;

ans += hundred[n/100];
n = n%100;

ans += tens[n/10];
n = n%10;

ans += ones[n];
cout<<ans;
}
