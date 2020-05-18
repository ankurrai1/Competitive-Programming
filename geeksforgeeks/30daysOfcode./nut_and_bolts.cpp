// problem statement is as following


// Given a set of N nuts of different sizes and N bolts of different sizes.
// There is a one-one mapping between nuts and bolts. Match nuts and bolts efficiently.
//
// Comparison of a nut to another nut or a bolt to another bolt is not allowed.
// It means nut can only be compared with bolt and bolt can only be compared with nut to see which one is bigger/smaller.


// un optamized solution which didn't follow some constraints as well but passed tests.
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s1,s2;
	    char x;
	    int count=0;
	    map<int,int> m;
	    map<int,int>:: iterator itr;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        s1+=x;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        s2+=x;
	    }
	    for(int i=0;i<n;i++)
	    {
	        m[s1[i]]=i;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(m.find(s2[i])!=m.end())
	        {
	            count++;
	        }
	    }
	    if(count==n)
	    {
	        for(itr =m.begin();itr!=m.end();++itr)
	        {
	            cout<<char(itr->first)<<" ";
	        }
	    }
	    cout<<endl;
	    for(itr =m.begin();itr!=m.end();++itr)
	        {
	            cout<<char(itr->first)<<" ";
	        }
	        cout<<endl;
	}
	return 0;
}
