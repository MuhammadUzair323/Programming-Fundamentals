#include<iostream>
using namespace std;
int main(){
    int sum=0, num=0;
    while(num>=0){
        sum=sum+num;
        cout<<"Enter number for sum: ";
        cin>>num;
    }
    cout<<"Sum : "<<sum;
}