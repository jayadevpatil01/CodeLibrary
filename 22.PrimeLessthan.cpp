#include <iostream>
using namespace std;

static void primenumber(int);

static void primenumber(int MyNum) {
  int n = 0;
  if (MyNum == 2 || MyNum == 3){
    cout<<MyNum<<" ";
  } 
  else if (MyNum % 6 == 1 || MyNum % 6 == 5) {
    for(int i = 2; i*i <= MyNum; i++) {
      if(MyNum % i == 0){
        n++;
        break;
      }
    }
    if (n == 0){
      cout<<MyNum<<" ";
    } 
  } 
}

int main() {
  int x = 100;
  cout<<"Prime numbers less than "<<x<<" are: "<<"\n";
  for(int i = 2; i < x + 1; i++) {
    primenumber(i);
  }
  return 0;
}
