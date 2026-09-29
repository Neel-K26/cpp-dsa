// largest of 3 numbers using ternary  operator
using namespace  std ;
#include<iostream>
int main()
{
    int num1,num2,num3,largest;
    cout<<"\n Enter the Numbers : ";
    cin>>num1>>num2>>num3;
    largest= num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
    // this should be read as  is num1 greater than num2 , if num1 is greater than num3 then num 1 else num 3 if num2 greater than num3 then num2 else num3
    cout<<"\n The largest number is : "<<largest;
    return 0;

}

// Created by bruce-wayne-2005 on 9/29/26.
//
