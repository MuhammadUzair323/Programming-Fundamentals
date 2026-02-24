#include<iostream>
using namespace std;
int main()
{
int Matric, Fsc, Ecat;
float Aggregate;
cout<<"Enter your FSC marks:    ";
cin>>Fsc;
cout<<"Enter your Matric marks:     ";
cin>>Matric;
cout<<"Enter your Ecat Marks:    ";
cin>>Ecat;

Aggregate= ((0.30 * Ecat/400) + (0.45 * Fsc/1200) + (0.25 * Matric/1100))*100;
cout<<" YOUR current Aggregate is :"<<Aggregate<<"%";

}
