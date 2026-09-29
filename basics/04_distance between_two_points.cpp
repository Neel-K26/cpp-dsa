// calculating distance between 2 points.
// Created by bruce-wayne-2005 on 9/29/26
using namespace std;
#include <iostream>
#include <cmath>
int main()
{
    int x1,x2,y1,y2;
    float dist ;
    cout<< " \n Enter the x and y cootdinate of the first point : " ;
    cin>>x1>>y1;
    cout << "\n Enter the x and y coordinate of the second point:";
    cin>>x2>>y2;
    // sqrt function to be used using cmath library
    dist= std::sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
    cout.precision(2);
    cout<<"\n Distance between two points : "<<dist;
    return 0;
}

//
