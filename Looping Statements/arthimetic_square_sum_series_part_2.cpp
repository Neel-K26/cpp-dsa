// arthimatic sum series
using namespace std;
#include<iostream>
#include<math.h>
int main()
{
    int n;
    float sum=0.0, a,i;
    cout<<"enter the number";
    cin>>n;
    for (i=1.0;i<=n;i++)
    {
        a= 1/pow(i,2);
        sum=sum+a;
    }

 cout<<"\n The sum of n^2 series 1/1^1 + 1/2^2 +...... 1/n^2 ="<<sum;
};
// Created by bruce-wayne-2005 on 10/13/26.
//
