#include <bits/stdc++.h>
using namespace std;

int ones[21] = {2,2,1,2,2,2,1,2,2,2,1,3,2,3,4,3,3,4,4,4,1};

unordered_map <int , int> tens;

unordered_map <int, string> hash;

int countPair(int arr[], int n, int d){
    multiset<int> st;
    int count = 0;
    for(int i = 0; i < n; i++){
        count += st.count(d-arr[i]);
        st.insert(arr[i]);
    }
    return count;
}

unordered_map <int, string>  fillHash(){

    unordered_map <int, string> hash;
    hash[0] = "zero";
    hash[1] = "one";
    hash[2] = "two";
    hash[3] = "three";
    hash[4] = "four";
    hash[5] = "five";
    hash[6] = "six";
    hash[7] = "seven";
    hash[8] = "eight";
    hash[9] = "nine";
    hash[10] = "ten";
    hash[11] = "eleven";
    hash[12] = "twelve";
    hash[13] = "thirteen";
    hash[14] = "fourteen";
    hash[15] = "fifteen";
    hash[16] = "sixteen";
    hash[17] = "seventeen";
    hash[18] = "eighteen";
    hash[19] = "nineteen";
    hash[20] = "twenty";
    hash[21] = "twentyone";
    hash[22] = "twentytwo";
    hash[23] = "twentythree";
    hash[24] = "twentyfour";
    hash[25] = "twentyfive";
    hash[26] = "twentysix";
    hash[27] = "twentyseven";
    hash[28] = "twentyeight";
    hash[29] = "twentynine";
    hash[30] = "thirty";
    hash[31] = "thirtyone";
    hash[32] = "thirtytwo";
    hash[33] = "thirtythree";
    hash[34] = "thirtyfour";
    hash[35] = "thirtyfive";
    hash[36] = "thirtysix";
    hash[37] = "thirtyseven";
    hash[38] = "thirtyeight";
    hash[39] = "thirtynine";
    hash[40] = "forty";
    hash[41] = "fortyone";
    hash[42] = "fortytwo";
    hash[43] = "fortythree";
    hash[44] = "fortyfour";
    hash[45] = "fortyfive";
    hash[46] = "fortysix";
    hash[47] = "fortyseven";
    hash[48] = "fortyeight";
    hash[49] = "fortynine";
    hash[50] = "fifty";
    hash[51] = "fiftyone";
    hash[52] = "fiftytwo";
    hash[53] = "fiftythree";
    hash[54] = "fiftyfour";
    hash[55] = "fiftyfive";
    hash[56] = "fiftysix";
    hash[57] = "fiftyseven";
    hash[58] = "fiftyeight";
    hash[59] = "fiftynine";
    hash[60] = "sixty";
    hash[61] = "sixtyone";
    hash[62] = "sixtytwo";
    hash[63] = "sixtythree";
    hash[64] = "sixtyfour";
    hash[65] = "sixtyfive";
    hash[66] = "sixtysix";
    hash[67] = "sixtyseven";
    hash[68] = "sixtyeight";
    hash[69] = "sixtynine";
    hash[70] = "seventy";
    hash[71] = "seventyone";
    hash[72] = "seventytwo";
    hash[73] = "seventythree";
    hash[74] = "seventyfour";
    hash[75] = "seventyfive";
    hash[76] = "seventysix";
    hash[77] = "seventyseven";
    hash[78] = "seventyeight";
    hash[79] = "seventynine";
    hash[80] = "eighty";
    hash[81] = "eightyone";
    hash[82] = "eightytwo";
    hash[83] = "eightyhree";
    hash[84] = "eightyfour";
    hash[85] = "eightyfive";
    hash[86] = "eightysix";
    hash[87] = "eightyseven";
    hash[88] = "eightyeighty";
    hash[89] = "eightynine";
    hash[90] = "ninety";
    hash[100] = "hundred";
    hash[99] = "ninetynine";
    hash[98] = "ninetyeight";
    hash[97] = "ninetyseven";
    hash[96] = "ninetysix";
    hash[95] = "ninetyfive";
    hash[94] = "ninetyfour";
    hash[93] = "ninetythree";
    hash[92] = "ninetytwo";
    hash[91] = "ninetyone";
    return hash;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    tens[1] = 1;
    tens[2] = 1;
    tens[3] = 1;
    tens[4] = 1;
    tens[5] = 1;
    tens[6] = 1;
    tens[7] = 2;
    tens[8] = 2;
    tens[9] = 2;

    unordered_map <int, string> hash = fillHash();

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 100) sum += 2;
        else if(arr[i] <= 20) sum += ones[arr[i] -1];
        else{
            sum += tens[arr[i]/10] + ones[arr[i] % 10];
        }
    }

    int count = countPair(arr, n, sum);
    if(count > 100) {
        cout << "greater 100";
    }
    else{
        cout << hash[count];
    }

	return 0;
}
