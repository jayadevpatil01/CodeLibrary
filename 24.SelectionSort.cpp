#include <iostream>
using namespace std;

// function for selection sort
static void selectionsort(int Array[], int n) {
  int temp;
  for(int i=0; i<n; i++) {
    int min_idx = i;
    for(int j=i+1; j<n; j++) {
      if(Array[j] < Array[min_idx])
      {min_idx = j;}
    }
    temp = Array[min_idx];
    Array[min_idx] = Array[i];
    Array[i] = temp;
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

  selectionsort(MyArray, n);
  cout<<"\nSorted Array\n";
  PrintArray(MyArray, n);
  return 0;
}
