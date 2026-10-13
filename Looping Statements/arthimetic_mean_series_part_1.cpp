// sum of the ams -1+1/2+.....+1/m
using namespace std;
#include<iostream>
main()
{
    int n;
    float sum=0.0,a,i;
    cout<<"enter the n :";
    cin>>n;
    for (i=1.0;i<=n;i++)
    {
        a=1/i;
        sum=sum+a;

    }
    cout<<"the sum of 1/1+ 1/2 +....1/"<<n<<"... is "<<sum;

}
// Created by bruce-wayne-2005 on 10/13/26.
//
