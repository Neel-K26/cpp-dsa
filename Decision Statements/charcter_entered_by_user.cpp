// to determine weather character eneted by User by User is numerical or string
using namespace std;
#include<iostream>
#include<ctype.h>
int main()
{
    char ch;
    cout<<"\n Press Any Key : ";
    cin>>ch;
    if (isalpha(ch) > 0)
        cout<<"\n User has entered character";
    if (isdigit(ch) > 0)
        cout<<"\n The User has entered a Digit ";
    if (isprint(ch) > 0)
        cout<<"\n The user has entered a printable character ";
    if (isspace(ch) > 0)
        cout<<"\n The user has entered a space character";
    if (ispunct(ch) > 0)
        cout<<"The user has entered a punctuation character";

}
// Created by bruce-wayne-2005 on 10/11/26.
//
