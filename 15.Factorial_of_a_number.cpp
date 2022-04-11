#include <iostream>
using namespace std;

static int factorial(int);

static int factorial(int x) {
  int y = (x == 0 || x == 1)? 1 : x*factorial(x-1);
  return y;  
}

int main(){
  cout<<"10! =  "<<factorial(10)<<"\n";
  cout<<"6! =  "<<factorial(6)<<"\n";
  return 0;
}
