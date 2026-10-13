// printing reverse of number using for loop
using namespace std;
#include<iostream>
main()
{
    int num,temp;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The reverse number is: ";
    while (num!=0)
    {
        temp=num%10;
        cout<<temp;
        num=num/10;

    }
}
// Created by bruce-wayne-2005 on 10/13/26.
//
