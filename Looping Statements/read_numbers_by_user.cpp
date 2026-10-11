// reading numbers until -1 occured counting positive,negative,zeroes by user.
using namespace std;
#include<iostream>
int main()
{
    int num;
    int negatives=0,positives=0, zeroes=0;
    cout<<"Enter -1 to exit... :";
    cout<<"\n Enter any number : ";
    cin>>num;
    while (num!=-1)
    {
        if (num>0)
            positives++;
        else if (num<0)
            negatives++;
        else
            zeroes++;
        cout<<"\n Enter any number : ";
        cin>>num;
        cout<<"\n Count of positive numbers : "<<positives;
        cout<<"\n Count of negative numbers : "<<negatives;
        cout<<"\n Count of zeroes : "<<zeroes;
        cout<<endl;


    }

}
// Created by bruce-wayne-2005 on 10/11/26.
//
