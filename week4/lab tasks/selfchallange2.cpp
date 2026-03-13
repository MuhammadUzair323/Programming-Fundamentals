#include<iostream>
using namespace std;
main()
{
    int salarypermonth=10000;
    int price=50000;
    int limitmonths=6;

    float advanceperc=0.5;
    int monthlyadvance=salarypermonth*advanceperc;
    int totalmonthsadvance=monthlyadvance*limitmonths;
    if(totalmonthsadvance>=price){
        cout<<"Ali can buy the laptop with 6 months advance!";
    }
    else{
        int monthsrequired=price/monthlyadvance;
        cout<<"Months required to buy laptop: "<<monthsrequired;
    }



    
}