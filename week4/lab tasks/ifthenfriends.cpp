#include<iostream>
using namespace std;
main()
{
    char going;
    cout<<"Are your friends going? (Press Y for yes/Press N for no): ";
    cin>>going;
    if(going == 'Y'){
        cout<<"You are also going";

    }
    else{
        cout<<"You are not going";
    }
}