//
// Created by bruce-wayne-2005 on 10/11/26.
//
// A program for income tax calculations with conditions if less than 150K then no tax , if between 150K to 300K then 10% tax and if 300K to 500K then 20% tax
// and above 500K 30%
using namespace std;
#include<iostream>
#define MIN1 150001
#define MAX1 300000
#define RATE1 0.10
#define MIN2 300001
#define MAX2 500000
#define RATE2 0.20
#define MIN3 500001
#define RATE3 0.30

main()
{
    double income,taxable_income,tax;
    cout<<"Enter The income : ";
    cin>>income;
    taxable_income=income-150000;
    if(taxable_income<=0)
        cout<<"\n No tax";
    else if (taxable_income>=MIN1&&taxable_income<=MAX1)
        tax= (taxable_income-MIN1)*RATE1;
    else if (taxable_income>MIN2&&taxable_income<=MAX2)
        tax=(taxable_income-MIN2)*RATE2;
    else
        tax= (taxable_income-MIN3)*RATE3;
    cout<<"\n TAX :" << tax;





}

// Created by bruce-wayne-2005 on 10/11/26.


//#ifndef CPP_DSA_INCOME_TAX_CALCULATION_USING_IF_ELSEIF_H
//#define CPP_DSA_INCOME_TAX_CALCULATION_USING_IF_ELSEIF_H


//class income_tax_calculation_using_if_elseif

