#include <iostream>
using namespace std;

static void swap(int, int);

static void swap(int x, int y) {
  cout<<"Before Swap.\n";
  cout<<"x = "<<x<<"\n";
  cout<<"y = "<<y<<"\n";

  //Swap technique
  int temp = x;
  x = y;
  y = temp;

  cout<<"After Swap.\n";
  cout<<"x = "<<x<<"\n";
  cout<<"y = "<<y<<"\n";
}

int main() {
  swap(10, 25);
  return 0;
}
