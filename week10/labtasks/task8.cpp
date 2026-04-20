#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   double a, b, c;
   cout<<"Enter Value of a : ";
   cin>>a;
   cout<<"Enter Value of b : ";
   cin>>b;
   cout<<"Enter Value of c : ";
   cin>>c;
   if(a==0){
    cout<<"the value of a cannot be zero";
    return 0;
   }
   double determinant=(b*b)-4*a*c;
   if(determinant>0){
     double root1=(-b+sqrt(determinant))/(2*a);
     double root2=(-b-sqrt(determinant))/(2*a);
     cout<<"Two real and distinct roots are "<<root1<<" and "<<root2;
   }
   if(determinant==0){
    double root=-b/(2*a);
    cout<<"The only one real root is "<<root;
   }
   if(determinant<0){
    cout<<"The two complex roots are x= "<<-b/(2*a)<<" + "<<sqrt(-determinant)/(2*a)<<"i and x= "<<-b/(2*a)<<" - "<<sqrt(-determinant)/(2*a)<<"i";
   }
}