#include <iostream>
using namespace std;

static void primenumber(int);

static void primenumber(int MyNum) {
  int n = 0;
  if (MyNum == 2 || MyNum == 3){
    cout<<MyNum<<" is a prime number.";
  } 
  else if (MyNum % 6 == 1 || MyNum % 6 == 5) {
    for(int i = 2; i*i <= MyNum; i++) {
      if(MyNum % i == 0){
        n++;
        break;
      }
    }

    if (n == 0){
      cout<<MyNum<<" is a prime number.";
    } 
    else {
      cout<<MyNum<<" is not a prime number.";
    }
  } 
  else {
    cout<<MyNum<<" is not a prime number.";
  }
}

int main() {
  primenumber(21);
  return 0;
}
