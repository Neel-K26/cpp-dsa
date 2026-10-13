// entering number and all its sum displayed using while loop
using namespace std;
#include<iostream>
main()
{
    int num,temp,sumofdigits=0;
    cout<<"Enter a number:";
    cin>>num;
    while (num!=0)
    {
        temp=num%10;
        sumofdigits+=temp;
        num=num/10;

    }
    cout<<"\n The sum of digits="<<sumofdigits;
 }
// Created by bruce-wayne-2005 on 10/13/26.
//
