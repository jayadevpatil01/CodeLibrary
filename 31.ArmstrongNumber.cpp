#include <iostream>
using namespace std;

static int Pow(int, int);
static void ArmStrongNum(int);

//Calculate power of a digit
static int Pow(int MyNum, int n) {
  int x = 1;
  while(n > 0) {
    x = x*MyNum;
    n--;
  }
  return x;
}

static void ArmStrongNum(int MyNum, int Order) {
  int y = MyNum;
  int sum = 0;

  while (y > 0) {
    int x = y % 10;
    sum = sum + Pow(x, Order);
    y = y/10;
  }

  if (MyNum == sum){
    cout<<MyNum<<" is a Armstrong Number.\n";
  } else {
    cout<<MyNum<<" is not a Armstrong Number.\n";
  }
}

int main() {
  ArmStrongNum(371, 3);
  ArmStrongNum(1634, 4);
  ArmStrongNum(1000, 4);
  return 0;
}
