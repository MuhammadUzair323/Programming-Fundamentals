#include<iostream>
using namespace std;
int main(){
    int a=0,b=0,gcd=1;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    for ( int i=1; i<=a&&i<=b; i++)
    {
        if(a%i==0&&b%i==0){
           gcd=i; 
        }
    }
    int lcm;
    lcm=(a*b)/gcd;

    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd<<"\n";
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm;
}