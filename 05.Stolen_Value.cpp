/*
    Given n houses, robber needs to rob house in such that he cannot rob adjacent houses, and the
    total amount should be maximum.

    idx | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |
    val | 0 | 9 | 3 | 5 | 8 | 2 | 4 | 7 |
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int val[n],dp[n];
    for(int i=0; i<n; ++i){
        cin>>val[i];
        dp[i]=0;
    }

    dp[0]=val[0];
    dp[1]=max(val[0], val[1]);

    for(int i=2; i<n; ++i){
        dp[i]=max(dp[i-1], dp[i-2]+ val[i]);
    }
    for(int i=0; i<n; ++i){
        cout<<dp[i]<<" ";
    }
    return 0;
}