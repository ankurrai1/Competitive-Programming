// this is basic file to use as templet for most of the competitive coding problems
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code goes here as regular
    cin >> n >> k;
    cout << (n+k) << "\n";
    // In above line to the place of endln we should use "\n" which is way faster
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
//
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     return 0;
// }

// getting input as getline

#include <bits/stdc++.h>
using namespace std;

int main()
{   int a;
    string S, T;

    cin >> a;
    cin.ignore(256, '\n'); // remaining input characters up to the next newline character
                       // are ignored

    getline(cin, S);

    stringstream X(S);

    while (getline(X, T, ' ')) {
        cout << T << endl;
    }

    return 0;
}
