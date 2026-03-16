#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int sum=0,mod;
    while(num!=0){
       mod=num%10;
       num=num/10;
       sum=sum+mod;
    }
       cout<<"Sum of digits is "<<sum;
}