#include <iostream>
using namespace std;

// function for bubble sort
static void bubblesort(int Array[], int n) {
  int temp;
  for(int i=0; i<n; i++) {
    for(int j=0; j<n-i-1; j++) {
      if(Array[j]>Array[j+1]) {
        temp = Array[j];
        Array[j] = Array[j+1];
        Array[j+1] = temp;
      }
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

  bubblesort(MyArray, n);
  cout<<"\nSorted Array\n";
  PrintArray(MyArray, n);
  return 0;
}
