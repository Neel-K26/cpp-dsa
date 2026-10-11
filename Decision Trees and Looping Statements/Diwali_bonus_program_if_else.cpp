#include <iostream>
// diwali bonus : 5% bonus salary given : 10% to female workers. if salary less than 10K then 2% bonus calculate bonus that has to be given to employee
using namespace std;
#include<iostream>
main()
{
    char ch ;
    float sal,bonus,amt_to_be_paid;
    cout<<"\n Enter the Sex of employee(m or f) : ";
    cin>>ch;
    cout<<"\n Enter the Salary of Employee : ";
    cin>>sal;
    if (ch=='m')
        bonus=0.05*sal;
    else
        bonus=0.10*sal;
    if (sal<10000)
        bonus+=0.20*sal;
    amt_to_be_paid=sal+bonus;
    cout<<"\n Salary = "<<sal;
    cout<<"\n Bonus ="<<bonus;
    cout<<"\n********************";
    cout<<"\n The amount is "<<amt_to_be_paid;

}
//
// Created by bruce-wayne-2005 on 10/11/26.
//
