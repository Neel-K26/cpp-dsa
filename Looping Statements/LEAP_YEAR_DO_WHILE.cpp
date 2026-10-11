// leap year using do-while loop (atlease executed once)
using namespace std;
#include<iostream>
int main()
{
    int m=1900,n=2100,i;
    do
    {
        if (i%4==0)
            cout<<"\n"<<m<<"is a leap year";
        else
            cout<<"\n"<<m<<"is not a leap year";
        m=m+1;
    }while (m<=n);

}
// Created by bruce-wayne-2005 on 10/11/26.
//
