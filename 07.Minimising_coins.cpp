/*
We need find the minimum number of coins required
to reach the sum.
n = 3
c = { 1, 5, 7}
sum = 11

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin>>n;
    int c[n];
    for(int i=0;i<n;++i){
        cin>>c[i];
    }  

    cin>>sum;
    int dp[sum+1];
    for(int i=0;i<=sum;i++){
        dp[i]=INT_MAX;
    }

    dp[0]=0;
    for(int i=1; i<=sum; i++){
        for(int j=0; j<n; j++){
            if((i-c[j])>=0){
                dp[i] = min(dp[i], dp[i-c[j]]+1);       
            }
        }
    }

    for(int i=0;i<=sum;i++){
        if(dp[i]==INT_MAX) dp[i]=-1;
    }

    // for(int i=0;i<=sum;i++){
    //     cout<<dp[i]<<" ";
    // }

    cout<<dp[sum]<<endl;
    return 0;
}
