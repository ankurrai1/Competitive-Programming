#include<bits/stdc++.h>

using namespace std;

void sort012(int arr[], int n)
{
    int zero = 0, two = n-1, i = 0;
    while(i <= two){
        if(arr[i]==0){
            swap(arr[i], arr[zero]);
            zero++;
            i++;
        }
        else if(arr[i] == 2){
            swap(arr[i], arr[two]);
            two--;
        }
        else i++;
    }
}