#include <iostream>
using namespace std;

static void largest(int, int, int);

static void largest(int x, int y, int z) {
  int max = x;
  if (x >= y && x >= z)
    max = x; 
  else if (y >= x && y >= z)
    max = y; 
  else 
    max = z; 
  cout<<"largest number among "<<x<<", "<<
        y<<" and "<<z<<" is: "<<max<<"\n";
}

int main() {
  largest(100, 50, 25);
  largest(50, 50, 25);
  return 0;
}
