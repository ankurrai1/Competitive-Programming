// problem statement is as following

// Given an array of n elements,
//  where each element is at most k away from its target position.
//  The task is to print array in sorted form.


// solution function  is  implemented here:


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        priority_queue <int, vector<int>, greater<int> > min_heap;
        int n, k, ele;
        cin >> n >> k;
        while(n--){
            cin >> ele;
            if(min_heap.size()<k)
             {
                 min_heap.push(ele);
                 if(min_heap.size()==k)
                 {
                     cout<<min_heap.top()<<" ";
                     min_heap.pop();
                 }
             }
        }
        while(!min_heap.empty()){
            cout << min_heap.top() << " ";
            min_heap.pop();
        }
        cout << "\n";
    }
	return 0;
}
