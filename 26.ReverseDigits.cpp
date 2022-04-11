#include <iostream>
using namespace std;
static int reverse(int); 

static int reverse(int MyNum){
  int RevNum = 0;
  int remainder;

  while(MyNum > 0){
    remainder = MyNum % 10;
    MyNum = MyNum / 10;
    RevNum = RevNum * 10 + remainder;
  }
  return RevNum;
}

int main() {
  int x = 1285;
  int y = 4567;
  cout<<"Reverse of "<<x<<" is: "<<reverse(x);
  cout<<"\nReverse of "<<y<<" is: "<<reverse(y);
  return 0;
}
