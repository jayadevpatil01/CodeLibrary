// C++ code to find maximum triplet sum
#include <bits/stdc++.h>
using namespace std;
 
int maxTripletSum(int arr[], int n)
{

    int maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;
 
    for (int i = 0; i < n; i++) {
 
        if (arr[i] > maxA) {
            maxC = maxB;
            maxB = maxA;
            maxA = arr[i];
        }
 
        else if (arr[i] > maxB) {
            maxC = maxB;
            maxB = arr[i];
        }

        else if (arr[i] > maxC)
            maxC = arr[i];
    }
 
    return (maxA + maxB + maxC);
}
 
int main()
{
    int arr[] = { 1, 0, 8, 6, 4, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxTripletSum(arr, n);
    return 0;
}