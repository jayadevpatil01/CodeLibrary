/*
 * C++ Program to Check if the Entered Year is a Leap Year
 */
#include <iostream>
using namespace std;
 
int main()
{
    int year;
 
    cout << "Enter the year in yyyy format : ";
    cin >> year;
    if (year % 4 == 0)
        cout << year << " is a leap year";
    else
        cout << year << " is not a leap year";
}