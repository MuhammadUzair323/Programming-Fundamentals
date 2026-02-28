#include<iostream>
using namespace std;
main()
{
    float days, kilo;
    string name;
 cout<<"Please enter Your Name: ";
 cin>>name;
 cout<<"Please enter Weight in Kilogram: ";
 cin>>kilo;
 days=kilo*15;
 cout<<name<<" will loose "<<kilo<<" kg weight in "<<days<<" days";
}