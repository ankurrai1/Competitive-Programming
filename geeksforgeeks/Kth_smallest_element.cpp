// Kth smallest element solution file
// problem link is as following
// https://practice.geeksforgeeks.org/problems/kth-smallest-element/0


#include <bits/stdc++.h>
#include <queue>

using namespace std;

struct comparator {
 bool operator()(int i, int j) {
 return i > j;
 }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,i,l;
        cin >> n;
         priority_queue<int, std::vector<int>, comparator> minHeap;
        for(i = 0; i < n; i++){
            cin >> l;
            minHeap.push(l);
        }
        cin >> l;
        for(i = 1; i < l; i++){
            minHeap.pop();
        }
        cout <<(minHeap.top())<< "\n";
    }
    return 0;
}

// ANOTHER method using inbuilt sort function

#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,i,l;
        cin >> n;
        int ar[n];
        for(i = 0; i < n; i++){
            cin >> ar[i];
        }
        cin >> l;
        sort(ar,ar+n);
        cout << ar[l-1]<<"\n";
    }
    return 0;
}
