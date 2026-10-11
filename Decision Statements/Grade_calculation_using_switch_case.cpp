// Its a demonstration of Switch case statements for grade calculation
using namespace std;
#include<iostream>
int main()
  {
    char grade;
    cout<<"\n Enter your grade : " ;
    cin>>grade;
    switch(grade)
    {
    case 'O': cout<<"\n Outstanding";
        break;
    case 'A': cout<<"\n Excellent";
        break;
    case 'B' : cout<<"\n Good ";
        break;
    case 'C': cout<<"\n Fair, You are pretty average";
        break;
    case 'F':cout<<"\n You are Failed be depressed";
        break;
    default: cout<<"\n Invalid grade";
        break;
    }
}
// Created by bruce-wayne-2005 on 10/11/26.
//

//#include "Grade_calculation_using_switch_case.h"
