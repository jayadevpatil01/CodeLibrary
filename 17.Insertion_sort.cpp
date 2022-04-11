#include <iostream>
using namespace std;

// function for insertion sort
static void insertionsort(int Array[], int n) {
  for(int i=0; i<n; i++) {
    int curr = Array[i];
    int j = i - 1;
    while(j >= 0 && curr < Array[j]) {
      Array[j + 1] = Array[j];
      Array[j] = curr;
      j = j - 1;
    }
  }
}

// function to print array
static void PrintArray(int Array[], int n) { 
  for (int i=0; i<n; i++) 
    cout<<Array[i]<<" "; 
  cout<<"\n"; 
} 

// test the code
int main (){
  int MyArray[] = {1, 10, 23, 50, 4, 9, -4};
  int n = sizeof(MyArray) / sizeof(MyArray[0]); 
  cout<<"Original Array\n";
  PrintArray(MyArray, n);

  insertionsort(MyArray, n);
  cout<<"\nSorted Array\n";
  PrintArray(MyArray, n);
  return 0;
}
