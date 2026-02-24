#include<iostream>
using namespace std;
main()
{
    int current, power, time;
    cout<<"enter current)(in amperes): ";
    cin>>current;
    cout<<"enter time (in seconds): ";
    cin>>time;
    power=current/time;
    cout<<"Power in watt is: "<<power;
}