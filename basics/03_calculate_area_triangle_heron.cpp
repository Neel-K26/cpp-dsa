// program to evaluate area of triangle using herons forumula
using namespace std;
#include <iostream>
#include <cmath>
int main()
{
    float a,b,c,area,S;
    cout<<"\n Enter the three sides of triangle : " ;
    cin>>a>>b>>c;
    S=(a+b+c)/2;
    // sqrt reqruied to take square root for triangle using math library
    area= std::sqrt(S*(S-a)*(S-b)*(S-c));
    cout<<"\n Area of Triangle="<<area ;
    return 0;

}
// Created by bruce-wayne-2005 on 9/29/26.
//
