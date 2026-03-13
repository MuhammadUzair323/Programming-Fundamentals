#include<iostream>
using namespace std;
int main(){
    float temp1, temp2;
    int diff;
    cout<<"Temperature of city 1: ";
    cin>>temp1;
    cout<<"Temperature of city 2: ";
    cin>>temp2;
    diff=temp1-temp2;
    if(diff>10){
        cout<<"Difference is too big";
    }

}