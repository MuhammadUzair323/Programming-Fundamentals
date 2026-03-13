#include<iostream>
using namespace std;
main()
{
    string my_password, user_enter;
    my_password = "Pass@123!";
    cout<< "Enter the password: ";
    cin>> user_enter;\
    if( user_enter == my_password){
        cout<<"Wow! You have cracker the code!";

    }
    else{
        cout<<"IT is  not that simple, try again";
    }
    }
