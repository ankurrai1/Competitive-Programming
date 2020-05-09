// problem statement is as following

//Given a struct array of type Height, having two elements feet and inches. Find the maximum height,
// where height is calculated sum of feet and inches after converting feet into inches.

// solution function is implemented here:


int findMax(Height arr[], int n)
{
    int maxHeight = 0;
    for(int i = 0; i < n; i++){
        int cHeight = arr[i].feet * 12 + arr[i].inches;
        maxHeight = max(cHeight, maxHeight);
    }
    return maxHeight;
}
