#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int tempnum=num;
    int count;
    while(num!=0){
        num=num/10;
        count++;
    }
    if(tempnum==0){
        count=1;
    }
    cout<<"There are "<<count<<" digits in "<<tempnum;
}