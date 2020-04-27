// #Day1
// problem statement
//Your task to complete the function remove_duplicate which removes the duplicate  elements from the array .

int remove_duplicate(int A[],int N)
{
    int tag = 0;
    map<int,int> mathced;
    for(int i = 0; i < N; i++){
        if(!mathced[A[i]]){
            mathced[A[i]] = 1;
            A[tag] = A[i];
            tag++;
        }
    }
    return tag;
}
