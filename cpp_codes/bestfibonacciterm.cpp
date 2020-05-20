// In this method we directly implement the formula for nth term in the fibonacci series. it is supposed to be the best solution
// Fn = {[(√5 + 1)/2] ^ n} / √5


#include<iostream>
#include<cmath>

int fib(int n) {
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}

// Driver Code
int main ()
{
  int n = 9;
  std::cout << fib(n) << std::endl;
  return 0;
}
