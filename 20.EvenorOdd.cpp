#include <iostream>
using namespace std;

int main() {
  int MyNum = 17;
  if (MyNum % 2 == 0) {
    cout<<MyNum<<" is an even number.";
  } else if (MyNum % 2 == 1) {
    cout<<MyNum<<" is an odd number.";
  }
  return 0;
}
