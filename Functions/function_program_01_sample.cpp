// some basic information about function declaration,defination, function calling
using namespace std;
#include<iostream>
int sum(int a,int b); // Function Declaration
int main()
{
    int num1,num2,total=0;
    cout<<"Enter the first number : ";
    cin>>num1>>num2;
    total=sum(num1,num2);
    cout<<"\nTotal= "<<total;

}
// Function Defination
// Function Defination
int sum(int a,int b) // Function Header
{
    int result;
    result=a+b;
    return result;
}

// Created by bruce-wayne-2005 on 10/17/26.
//
