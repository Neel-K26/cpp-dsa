// addition substraction division and multiplication of Integers
using namespace std;
#include<iostream>

int main()
{
    int num1,num2;
    int add_res=0,sub_res=0,mul_res=0,idiv_res=0,modiv_res=0;
    float fdiv_res=0.0;
    cout<<"\n Enter the 2 numbers : ";
    cin>>num1>>num2;
    add_res=num1+num2;
    sub_res=num1-num2;
    mul_res=num1*num2;
    idiv_res=num1/num2;
    modiv_res=num1%num2;
    fdiv_res=(float)(num1/num2);
    cout<<"\n"<<num1<<"+"<<num2<<"=" << add_res;
    cout<<"\n Subtraction : "<<sub_res;
    cout<<"\n Multiplication : "<<mul_res;
    cout<<"\n Division : "<<idiv_res;
    cout<<"\n Modulus : "<<modiv_res;
    cout<<"\n Float Division : "<<fdiv_res;
    return 0;

}
// Created by bruce-wayne-2005 on 9/29/26.
//
