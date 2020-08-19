// Kaden's algorithm is most efficient way to solve continuous sum sub arrays problems.
// folowing is also a variation of kaden's algorithm to solve negative numbers.  there may be many different
// but most basic is as folowing.


// Implement here


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, -2, 5};
    int cSum = arr[0], maxSum = arr[0];
    for(int i = 1; i < n; i++){
        cSum += arr[i];
        cSum = max(cSum,arr[i]); // This is the Place where we removed previous elements or slide our window because they cant be maximum;
        maxSum = max(cSum,maxSum);
    }
    cout << maxSum << "\n";

    return 0;
}
