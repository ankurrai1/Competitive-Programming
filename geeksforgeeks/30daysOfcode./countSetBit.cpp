// problem statement is as following
// Given a positive integer N, print count of set bits in it. For example,
// if the given number is 6(binary: 110), output should be 2 as there are two set bits in it.


#include <iostream>
using namespace std;

// Nives approch to solve

unsigned int get_count(unsigned int n){
    unsigned int count = 0;
    while(n){
        count += n & 1;
        n >>= 1;
    }
    return count;
}

// recursive approch to solve

unsigned int get_count(unsigned int n){
  if(n == 0) return 0;
  return (n & 1) + get_count(n >> 1);
}


// Brain Karnighan's algorithm approch to solve

unsigned int countSetBits(int n)
{
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

// built in approch in Gcc ==> cout << __builtin_popcount(4) << endl;

int main() {
    int t;
    cin >> t;
    while(t--){
        unsigned int a;
        cin >> a;
        cout << get_count(a) << "\n";
    }
	return 0;
}

// Fastest approch to solve the
// Mapping numbers with the bit. It simply maintains a Map(or array) of numbers to bits for a nibble.
// num_to_bits[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};

                   // { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };  indexes
int num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 }; //  count of set bits.

/* Recursively get nibble of a given number
and map them in the array */
unsigned int countSetBitsRec(unsigned int num)
{
    int nibble = 0;
    if (0 == num)
        return num_to_bits[0];

    // Find last nibble
    nibble = num & 0xf; // it is doing & with 0000....1111 which mean we are concidered only last four bits;

    // Use pre-stored values to find count
    // in last nibble plus recursively add
    // remaining nibbles.
    return num_to_bits[nibble] + countSetBitsRec(num >> 4);
}
