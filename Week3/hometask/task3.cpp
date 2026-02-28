#include<iostream>
using namespace std;
main()
{
    int time, acc, Vi, Vf;
    cout<<"PLease enter time in seconds: ";
    cin>>time;
    cout<<"PLease enter acceleration: ";
    cin>>acc;
    cout<<"PLease enter intitial velocity: ";
    cin>>Vi;
    Vf=(acc*time)+Vi;
    cout<<"Final velocity will be:"<<Vf;
}