#include<iostream>
using namespace std;
int main(){
    string brother1,brother2,brother3;
    int age1,age2,age3;
    cout<<"Enter name of first brother: ";
    cin>>brother1;
    cout<<"Enter age of first brother: ";
    cin>>age1;
    cout<<"Enter name of second brother: ";
    cin>>brother2;
    cout<<"Enter age of second brother: ";
    cin>>age2;
    cout<<"Enter name of third brother: ";
    cin>>brother3;
    cout<<"Enter age of third number: ";
    cin>>age3;
    if(age1<age2&&age2<age3){
        cout<<brother1<<" is the youngest";

    }
    if(age2<age1&&age1<age3){
        cout<<brother2<<" is the youngest";
    
    }
    if(age3<age2&&age2<age1){
        cout<<brother3<<" is the youngest";
    }
}