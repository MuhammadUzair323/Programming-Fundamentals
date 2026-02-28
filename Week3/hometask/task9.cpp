#include<iostream>
using namespace std;
main()
{
    int number, sum;
    sum=0;
 cout<<"PLease enter a 4 digit number ";
 cin>>number;
 sum= sum+(number%10);
 number=number/10;
 sum= sum+(number%10);
 number=number/10;
 sum= sum+(number%10);
 number=number/10;
 sum= sum+(number%10);
 number=number/10;
 cout<<"Sum of Individual digits is:  "<<sum;

 
}