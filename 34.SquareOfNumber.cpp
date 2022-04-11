#include <iostream>
using namespace std;

int main (){
  int n = 10;
  int sum = 0;

  //calculating sum of squares from 1 to n
  for(int i = 1; i <= n; i++)
    sum += i*i;

  cout<<"Sum is: "<<sum;
  return 0;
}
