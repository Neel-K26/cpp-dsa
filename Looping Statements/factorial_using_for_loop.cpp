// factorial of numbers usinf for loop
using namespace std;
#include<iostream>
int main()
{
     long long fact=1,num,i;
    cout<<"\nEnter a number:";
    cin>>num;
    if (num<0)
        cout<<"no factorial for negative number";
    else
        for (i=1;i<=num;i++)
        {
            fact=fact*i;


        }
    cout<<"\nFactorial of "<<num<<" is "<<fact;
    return 0;
}
// Created by bruce-wayne-2005 on 10/13/26.
//
