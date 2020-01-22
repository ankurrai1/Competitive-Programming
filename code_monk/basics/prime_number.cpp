#include <iostream>

using namespace std;


void print_prime(int);
bool is_prime(int);

int main() {
	int num;
	cin >> num;
	print_prime(num);
	return 0;
}

void print_prime(int n){
    for(int i = 0; i<n; i++){
        if(is_prime(i)){
            cout << i << " ";
        }
    }
}

bool is_prime(int num){
    if(num <= 1) return false;
    for(int j=2; j<num-1; j++){
        if(num%j == 0){
            return false;
        }
    }
    return true;
}
