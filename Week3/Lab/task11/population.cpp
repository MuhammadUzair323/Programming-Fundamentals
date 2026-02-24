#include<iostream>
using namespace std;
main()
{
    int current, future, bpm;
    cout<<"Enter Current births rate per month: ";
    cin>>bpm;
    cout<<"Enter Current world population: ";
    cin>>current;
    future=current+(bpm*12*30);
    cout<<"Future Population in three decades will be:"<<future;

}    