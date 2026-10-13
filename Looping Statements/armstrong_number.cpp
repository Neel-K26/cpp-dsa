// armstrong number calculation
using namespace std;
#include <iostream>
#include<math.h>
main()
{
    int num,sum=0,r,n;
    cout<<"Enter a number: ";
    cin>>num;
    n=num;
    while (n>0)
    {
        r=n%10;
        sum+=pow(r,3);
        n=n/10;

    }
    if (sum==num)
        cout<<"\nThe "<<num<< " is an Armstrong Number";
    else
        cout<<"\nThe "<<num<< " is not an Armstrong Number";
}
// Created by bruce-wayne-2005 on 10/13/26.
//
