// pattern of 12345 printed on each line 5 times using for
using namespace std;
#include<iostream>
main()
{
    int i, j;
    for (i=1;i<=5;i++)
    {
        cout<<"\n Pass"<<i<<" - ";
        for(j=1;j<= 5;j++)
            cout<<" "<< j;
    }
}
// Created by bruce-wayne-2005 on 10/13/26.
//
