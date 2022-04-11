#include <iostream>
#include <cmath>
using namespace std;

long long MaxPrime(long long num) {
  long long CurrMaxPrime = -1;

  if(num % 2 == 0) {
    CurrMaxPrime = 2;
    while(num % 2 == 0){
      num = num/2;
    }
  }
  
  for(long long i = 3; i <= sqrt(num); i += 2) {
    while(num % i == 0) {
      CurrMaxPrime = i;
      num = num/i;
    }
  }

  if (num > 2) 
    CurrMaxPrime = num;

  return CurrMaxPrime;
}

int main() {
  long long x, y, z;
  x = 42;
  y = 1092;
  z = 695467363456;

  cout<<"Largest prime factor of "<<x
      <<" is: "<<MaxPrime(x)<<"\n";
  cout<<"Largest prime factor of "<<y
      <<" is: "<<MaxPrime(y)<<"\n";
  cout<<"Largest prime factor of "<<z
      <<" is: "<<MaxPrime(z)<<"\n";
  return 0;
}
