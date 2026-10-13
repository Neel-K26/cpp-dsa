// converting the biary to decimal equivalent
using namespace std;
#include<iostream>
#include<math.h>
int main()
{
    int decimal_num=0,remainder,binary_num,i=0;
    cout<<"Enter binary number: ";
    cin>>binary_num;
    while(binary_num!=0)
    {
        remainder=binary_num%10;
        decimal_num=decimal_num+remainder*pow(2,i);
        binary_num=binary_num/10;
        i++;
    }
    cout<<"\n The decimal equivalent of given binary is "<<decimal_num;
}
// Created by bruce-wayne-2005 on 10/13/26.
//
