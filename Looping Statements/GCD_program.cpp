// program to calculate GCD of numbers
using namespace std;
#include <iostream>
main()
{
    int num1,num2,temp;
    int dividend,divisor,remainder;
    cout<<"enter the 2 numbers: ";
    cin>>num1>>num2;
    if (num1>num2)
    {
        dividend=num1;
        divisor=num2;
    }
    else
    {
        dividend=num2;
        divisor=num1;
    }
    while (divisor)
    {
        remainder=dividend%divisor;
        dividend=divisor;
        divisor=remainder;

    }
    cout<<"\n GCD of "<<num1<<" and "<<num2<<" is "<<dividend;

}
// Created by bruce-wayne-2005 on 10/13/26.
//
