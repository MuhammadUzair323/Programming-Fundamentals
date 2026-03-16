#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++)
        cout<<"*";
        cout<<"\n";
    }
    for(int a=5;a>=1;a--){
       for(int b=1;b<=a;b++)
       cout<<"*";
       cout<<"\n";
    }    

}