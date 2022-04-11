/*
Given a set of integers find out lonely integer (n - odd)
{ 1, 2, 3, 2, 4, 3, 1} 

Lonely integer - 4
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=a[0];
    for(int i=1;i<n;i++){
        temp = temp ^ a[i];
    }
    cout<<temp<<endl;
    return 0;
}
