// printing pyramid with ascending count using for looop
using namespace std;
#include<iostream>
main()
{
    int i,j,count=0; //count variable for conting in loops
    for (i=1;i<=5;i++)
    {
        cout<<"\n";
        for (j=1;j<=i;j++)
            cout<<""<<count++; // increment of count as the loop size increases

    }
}
// Created by bruce-wayne-2005 on 10/13/26.
//
