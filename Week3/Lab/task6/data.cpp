#include<iostream>
using namespace std;
main()
{
    float bit, mb;

    cout<<"Enter data in MBs: ";
    cin>>mb;
    bit=mb*1024*1024*8;
    cout<<"data in bits is: "<<bit;

}