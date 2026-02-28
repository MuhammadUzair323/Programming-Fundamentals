#include<iostream>
using namespace std;
main()
{
    float veg, fruit;
    int kgveg, kgfruit;
    float earning;

 cout<<"Please enter price of vegetables per kilogram(in coins): ";
 cin>>veg;
 cout<<"Please enter price of fruits per kilogram(in coins): ";
 cin>>fruit;
 cout<<"Please enter total kilograms of vegetable(kgs): ";
 cin>>kgveg;
 cout<<"Please enter total kilograms of fruits(kgs): ";
 cin>>kgfruit;


 earning=(veg/1.94*kgveg)+(fruit/1.94*kgfruit);
 cout<<"Total Earning in Rupees is: "<<earning;
}