// this will be centralised pyramid pattern using for loop
using namespace std;
#include<iostream>
#define N 5
main()
{
    int i,j,k,l;
    for (i=1;i<=N;i++)
    {
        for (k=N;k>=i;k--)
            cout<<" ";
        for (j=1;j<=i;j++)
            cout<<" "<<j;
        for (l=j-2;l>0;l--)
            cout<<"\n";

    }
}
// Created by bruce-wayne-2005 on 10/13/26.
//
