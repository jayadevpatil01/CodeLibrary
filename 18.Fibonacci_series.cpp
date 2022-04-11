#include <iostream>
using namespace std;

static int fib(int);

static int fib(int n) {
  //creating array which contains Fibonacci terms
  int f[n+1];
  f[0] = 0;
  f[1] = 1;
  for(int i = 2; i <= n ; i++) {
    f[i] = f[i-1] + f[i-2];
  }
  return f[n];
}

int main() {
  cout<<"Fibonacci 6th term: "<<fib(6)<<"\n";
  cout<<"Fibonacci 7th term: "<<fib(7)<<"\n";
  cout<<"Fibonacci 8th term: "<<fib(8)<<"\n";
  return 0;
}
