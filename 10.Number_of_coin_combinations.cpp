/*
Find the number of combinations to reach the sum.
given n coins with their values

input :
n=3
c = {2, 3, 5}
sum = 5

output :
3

explaination :
2 + 3
3 + 2
5

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin>>n;
    int c[n];
    for(int i=0; i<n; i++){
        cin>>c[i];
    }

    cin>>sum;
    int dp[sum+1];
    memset(dp, 0, sizeof(dp));
    dp[0] =1;

    for(int i=1;i<=sum;i++){
        for(int j=0;j<n;j++){
            if(i-c[j] >= 0){
                dp[i] = dp[i] + dp[i-c[j]];
            }
        }
    }
    cout<<dp[sum];
    // for(int i=0; i<=sum; i++){
    //     cout<<dp[i]<<" ";
    // }
    return 0;
}