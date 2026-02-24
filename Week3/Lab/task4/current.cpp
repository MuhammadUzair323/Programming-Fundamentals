#include<iostream>
using namespace std;
main()
{
    int charge, time, current;
    cout<<"enter charge amount: ";
    cin>>charge;
    cout<<"enter time in seconds: ";
    cin>>time;
    current=charge/time;
    cout<<"Current is: "<<current;

}