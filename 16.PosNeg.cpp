#include <iostream>
using namespace std;

static void CheckNumber(double);

static void CheckNumber(double x) {
  string message;

  if (x > 0)
    message = "Positive number";
  else if (x == 0)
    message = "Zero"; 
  else
    message = "Negative number"; 
  
  cout<<message<<"\n";
}

int main() {
  CheckNumber(5.5);
  CheckNumber(-10.8);
  return 0;
}
