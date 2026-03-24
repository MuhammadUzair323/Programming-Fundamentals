#include<iostream>
using namespace std;
int main(){
    string name[5];
    cout<<"Enter the Name of 5 students one by one: "<<endl;
    for(int i=0;i<5;i++){
        cin>>name[i];
    }
    cout<<"Student names are: "<<endl;
    for(int i=0;i<5;i++){
        cout<<name[i]<<endl;
    }
}