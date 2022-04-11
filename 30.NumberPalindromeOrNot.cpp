#include <iostream>
using namespace std;

static void Palindrome(int MyNum) {
  int revNum = 0;
  int Num = MyNum;

  while(Num > 0){
    int digit = Num % 10;
    revNum = revNum * 10 + digit;
    Num = Num / 10;
  }

  if (MyNum == revNum){
    cout<<MyNum<<" is a Palindrome number.\n";
  } else {
    cout<<MyNum<<" is not a Palindrome number.\n";
  }
}

int main() {
  Palindrome(12521);
  Palindrome(9779);
  Palindrome(1000);
  return 0;
}
