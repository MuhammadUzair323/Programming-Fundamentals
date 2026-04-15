#include<iostream>
#include<cmath>
using namespace std;
int main(){
    system("cls");
    float num1, num2;
    cout<<"Enter the base number: ";
    cin>>num1;
    cout<<"Enter the exponent number: ";
    cin>>num2;
    cout<<num1<<" raised to the power "<<num2<<" : "<<pow(num1,num2); 
}