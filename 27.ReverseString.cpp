#include <iostream>
using namespace std;

static void ReverseString(string MyString) {
  int l = 0;
  int r = MyString.length() - 1;

  while(r > l){
    //swapping characters at indices l and r
    char c = MyString[l];
    MyString[l] = MyString[r];
    MyString[r] = c;
    
    l++;
    r--;
  }
  cout<<MyString<<"\n";
}

int main() {
  ReverseString("Hello World");
  ReverseString("Programming is fun");
  ReverseString("Reverse this string");
  return 0;
}
