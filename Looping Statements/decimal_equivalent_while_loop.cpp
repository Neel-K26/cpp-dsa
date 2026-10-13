// giving binary equivalent of decimal number
using namespace std;
#include<iostream>
#include<math.h>
main()
{
    int decimal_num=0,remainder=0,i=0;
    int binary_num=0;
    cout<<"Enter a decimal number:";
    cin>>decimal_num;
    while (decimal_num!=0)
    {
        remainder=decimal_num%2;
        binary_num= binary_num+remainder*pow(10,i);
        decimal_num=decimal_num/2;
        i++;
    }
    cout<<"The binary equivalent of given decimal is  ="<<binary_num;
}
// Created by bruce-wayne-2005 on 10/13/26.
//
