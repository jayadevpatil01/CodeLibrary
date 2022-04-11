/* C++ Program to Sort the elements in array in descending order */

#include<iostream>
using namespace std;

int main()
{
    int i,j,a[50],size,temp;
    cout<<"Enter array size( Max:50 ) :: ";
    cin>>size;
    cout<<"\nEnter array elements :: \n";

    for(i=0; i<size; i++)
    {
        cout<<"\nEnter arr["<<i<<"] Element :: ";
            cin>>a[i];
    }

    cout<<"\nData before sorting :: \n\n";

    for(i=0;i<size;i++)
    {
      cout<<" "<<a[i]<<" ";
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    cout<<"\n\nData after sorting :: \n\n";
    for(j=size-1;j>=0 ;j--)
    {
        cout<<" "<<a[j]<<" ";
    }
    cout<<"\n\n";
    return 0;
}