// numbers from m to n classifying them into odd/even
using namespace std;
#include<iostream>
main()
{
    int i,m,n;
    cout<<"Enter value of m and n : ";
    cin>>m>>n;
    for (i=m;i<=n;i++)
    {
        if (i%2==0)
            cout<<"\n"<<i<<"is even";
        else
            cout<<"\n"<<i<<"is odd";
    }
}
// Created by bruce-wayne-2005 on 10/13/26.
//
