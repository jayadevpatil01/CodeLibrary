/*
Game consist 2 players,given an array player needs to select highest element
in the array and remove all the elements to the right of it.

Who will be the winner if P1 starts his first turn ?

inp = {6, 4, 2, 8, 5, 9, 7, 15}
P2 will be the winner.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max,count=1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    max= arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
            count = count+1;
        }
    }
    if(count%2 == 0)cout<<"P2";
    else cout<<"P1";
    return 0;
}
