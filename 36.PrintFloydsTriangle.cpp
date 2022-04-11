#include <iostream>
using namespace std;

//function for floyd triangle
void FloydTriangle(int n){
  int value = 1;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
      cout<<value<<" "; 
      value++;
    }
    cout<<"\n"; 
  }
}

int main (){
  FloydTriangle(7);
  return 0;
}
