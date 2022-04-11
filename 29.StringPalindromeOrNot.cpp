#include <iostream>
using namespace std;

static void Palindrome(string MyString) {
  int l = 0;
  int r = MyString.length() - 1;
  int flag = 0;

  while(r > l){
    if (MyString[l] != MyString[r]){
      flag = 1;
      break;
    }
    l++;
    r--;
  }

  if (flag == 0){
    cout<<MyString<<" is a Palindrome string.\n";
  } else {
    cout<<MyString<<" is not a Palindrome string.\n";
  }
}

int main() {
  Palindrome("radar");
  Palindrome("rubber");
  Palindrome("malayalam");
  return 0;
}
