#include<iostream>
 
using namespace std;
 
void decimal2roman(int num){
    int decimal[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1}; //base values
    char *symbol[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};  //roman symbols
    int i = 0;
 
    while(num){ 
        while(num/decimal[i]){  
            cout<<symbol[i];    
            num -= decimal[i];  
        }
        i++;    
    }
}
 
int main()
{
    cout<<"250 -> ";
    decimal2roman(250);
 
    cout<<"\n1550 -> ";
    decimal2roman(1550);
 
    cout<<"\n670 -> ";
    decimal2roman(670);
 
    return 0;
}