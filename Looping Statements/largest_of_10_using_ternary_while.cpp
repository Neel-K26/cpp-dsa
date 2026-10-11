// larges of 10
using namespace std;
#include<iostream>
int main()
{
    int i=0,large=-1,num;
    while (i<=10)
    {
        cout<<"\n Enter the number : ";
        cin>>num;

    large=num>large?num:large;
    i++;
    cout<<"\n The largest number is "<<large;
    }
}
// Created by bruce-wayne-2005 on 10/11/26.
//
