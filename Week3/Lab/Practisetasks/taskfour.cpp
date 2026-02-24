#include<iostream>
using namespace std;
main()
{
    int chance, pers;
    float imp;
 cout<<"Please enter imposters: ";
 cin>>imp;
 cout<<"Please enter people: ";
 cin>>pers;
 chance=100*(imp/pers);
 cout<<"Chance:"<<chance<<"%";
}