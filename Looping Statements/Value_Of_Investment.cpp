// calculating value of investment
using namespace std;
#include <iostream>
main()
{
    double initVal,futureVal,ROI;
    int yrs,i;
    cout<<"Enter the investment value : ";
    cin>>initVal;
    cout<<"Enter the rate interest : ";
    cin>>ROI;
    cout<<"Enter the number of yrs for which investment has to be done : ";
    cin>>yrs;
    futureVal=initVal;
    cout<<"\n YEAR \t\t VALUE";
    cout<<"\n__________________";
    for (i=1;i<=yrs;i++)
    {
        futureVal=futureVal*(1+ROI/100.0);
        cout<<"\n"<<i<<"\t"<<futureVal;
    }
}
// Created by bruce-wayne-2005 on 10/13/26.
//
