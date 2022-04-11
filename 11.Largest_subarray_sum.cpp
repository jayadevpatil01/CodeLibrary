/*
Given an array of integers, find the maximum sub array sum.
A[] = {-2, -3, 4, -1, -2, 1, 5,-3}

max subarray sum = 7 of [4, -1, -2, 1, 5]

This approach is called KADANE's method.
(it doesn't handle if all array elements are negetive)
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int max=0,tmax=0;
    for (int i=0;i<n;i++){
        tmax = tmax + a[i];
        if(tmax<0)tmax=0;
        if(max<tmax)max=tmax;
    }
    cout<<max;

    return 0;
}