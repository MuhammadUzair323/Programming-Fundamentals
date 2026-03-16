#include<iostream>
using namespace std;
int main(){
    int result;
    int num=0;
    cout<<"Enter number for table: ";
    cin>>num;
    
    for(int i=1;i<=10;i++){
        result=num*i;
        cout<<num<<" x "<<i<<" = "<<result<<"\n";

    }

}