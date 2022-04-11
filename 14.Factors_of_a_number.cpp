#include <iostream>
#include <cmath>

using namespace std;

//function to print all divisors of a number
static void printDivisors(int n) {
  cout<<"Divisors of "<<n<<" are: ";
  //loop from 1 to sqrt(n)
  for(int i = 1; i <= sqrt(n); i++) {
    if(n%i == 0) {
      if(n/i == i)
        cout<<i<<" ";
      else
        cout<<i<<" "<<n/i<<" ";
    }
  }
  cout<<"\n";
}

int main(){
  printDivisors(10);
  printDivisors(50);
  printDivisors(100);
  return 0;
}
