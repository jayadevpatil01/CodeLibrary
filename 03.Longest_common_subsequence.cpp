#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(string s1,string s2){

    int a[s1.length()+1][s2.length()+1];
    memset(a, 0, sizeof(a));
    int i=1;
    for(int i=1;i<=s1.length();i++){
        for(int j=1;j<=s2.length();j++){
            if(s1[i-1] == s2[j-1]){
                a[i][j] = a[i-1][j-1]+1;
            }
            else{
                a[i][j] = max(a[i][j-1], a[i-1][j]);
            }
        }
    }

    int max = 0;
    for(int i=0;i<=s1.length();i++){
        for(int j=0;j<=s2.length();j++){
            if(max<a[i][j])max=a[i][j];
        }
    }

    return max;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int len = solve(s1,s2);
    cout<<len;
    return 0;
}

/*
Sample testcase : 
s1 = abcda
s2 = bdabac
*/