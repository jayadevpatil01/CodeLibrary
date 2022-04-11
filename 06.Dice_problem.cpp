/*


Find the number of possible ways to reach to reach
$ sum $ when a dice is thrown. (No restriction on number of throws. )

Dice has 6 possibilities : 1,2,3,4,5,6.

To get sum=3
1+1+1
2+1
1+2
3
Possibilities = 3

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum;
    cin>>sum;

    int dp[sum+1];
    memset(dp, 0, sizeof(dp));
    dp[0] =1 ;

    for(int i=1; i<=sum+1; i++){
        for(int j=1;(j<=6) && (i-j)>=0; j++){
            dp[i] = dp[i] + dp[i-j];
        }
    }
    cout<<dp[sum];
    return 0;
}