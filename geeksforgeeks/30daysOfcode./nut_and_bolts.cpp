// problem statement is as following


// Given a set of N nuts of different sizes and N bolts of different sizes.
// There is a one-one mapping between nuts and bolts. Match nuts and bolts efficiently.
//
// Comparison of a nut to another nut or a bolt to another bolt is not allowed.
// It means nut can only be compared with bolt and bolt can only be compared with nut to see which one is bigger/smaller.


// compared better solution solved as quick sort;

#include <bits/stdc++.h>
using namespace std;

 int partition(char arr[], int low, int high, char pivot)
    {
        int i = low;
        char temp1, temp2;
        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot){
                temp1 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp1;
                i++;
            } else if(arr[j] == pivot){
                temp1 = arr[j];
                arr[j] = arr[high];
                arr[high] = temp1;
                j--;
            }
        }
        temp2 = arr[i];
        arr[i] = arr[high];
        arr[high] = temp2;
        return i;
    }

void quick_sort_with_two(char n[], char b[], int s, int e){

    if(s < e){
        int pivot = partition(n, s, e, b[e]);
        partition(b, s, e, n[pivot]);
        quick_sort_with_two(n, b, s, pivot - 1);
        quick_sort_with_two(n, b, pivot + 1, e);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        char nuts[n];
        char bolts[n];

        for(int i = 0; i < n; i++){
            cin >> nuts[i];
        }
        for(int i = 0; i < n; i++){
            cin >> bolts[i];
        }

        quick_sort_with_two(nuts, bolts, 0, n);

        for(int i = 0; i < n; i++){
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for(int i = 0; i < n; i++){
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
	return 0;
}


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
