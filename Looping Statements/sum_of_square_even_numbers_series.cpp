// program realted to even number square of sum series.
using namespace std;
#include <iostream>
#include <cmath>
int main()
{
    int i,n;
    int term, sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            term=i*i;
            sum=sum+term;
        }

    }
    cout<<"\n2^2+4^2+6^2+......="<<sum;
    return 0;

}
// Created by bruce-wayne-2005 on 10/13/26.
//
