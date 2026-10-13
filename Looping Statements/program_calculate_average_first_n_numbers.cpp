// printing average of first n natural numbers
using namespace std;
#include <iostream>
int main()
{
    int n,i,sum=0;
    float avg=0.0;
    cout<<"Enter the value  of n: ";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
        avg=sum/n;
        cout<<"\n The Sum of first natural n numbers is "<<sum;
        cout<<"\n The Average of first natural n numbers is "<<avg;
    }
}
// Created by bruce-wayne-2005 on 10/13/26.
//
