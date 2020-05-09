// #Day3
// problem statement is as following
// A function f is defined as follows F(n)= (1) +(2*3) + (4*5*6) ... n.
// Given an integer n the task is to print the F(n)th term.

// solution function is as following


void fill_with_res(unsigned long long int* a, int n){
    unsigned long long int num;
    a[0] = 0;
    int mul = 1;

    for(int i = 1; i < n; i++){
        num = 1;
        for(int j = 0; j < i; j++){
            num = num*mul;
            mul++;
        }
        a[i] = a[i-1] + num;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long int res[11];
    fill_with_res(res,11);
    int t, n, k = 1;
    cin >> t;
    while(t--){
       cin >> n;
       cout << res[n]<< "\n";
    }
    return 0;
}
