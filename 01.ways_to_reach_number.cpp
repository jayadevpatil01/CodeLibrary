#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int count(int n){
    int arr[n+1];
    for(int i=0;i<=n;++i){
        arr[i]=0;
    }// init array with 0.

    arr[0]=1;
    for(int i=3; i<=n;++i)
    arr[i] +=arr[i-3];

    for(int i=5; i<=n;++i)
    arr[i] +=arr[i-5];

    for(int i=10; i<=n;++i)
    arr[i] +=arr[i-10];

     for(int i=0;i<n;++i){
        cout<<arr[i]<<"  ";
    }// init array with 0.

    return arr[n];
}


int main(){
    int n;
    cin>>n;

    cout<<"Number of ways :" << count(n)<<endl;
    return 0;
}