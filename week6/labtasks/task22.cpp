#include <iostream>
using namespace std;
int main(){
    int correctPIN = 1234;
    string correctusername = "admin";
    int pin[3];
    string user[15];          
    string students[3];
    int ages[3];
    string courses[3];
    int choice=0;
    bool login = false;
    for(int i = 0; i < 3; i++)
    {
        cout << "Enter username: "<<endl;
        cin >> user[i];
        if(user[i] == correctusername)
        {
             cout << "Enter ATM pass: ";
        cin >> pin[i];
        if(pin[i] == correctPIN)
        {
            login = true;
            cout << "Login Successful\n";
            login=true;
            break;
        }
        else
        {
            cout << "Incorrect Pass\n";
        }
        }
        else
        {
          cout<<"incorrect username! ";
        }

       
    }
    if(login == true)
    {
        while(true)
        {
            cout << "\n--- University Management System ---\n";
            cout << "1. ADD Student\n";
            cout << "2. View Students\n";
            cout << "3. ADD Course\n";
            cout << "4. View Course\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            if(choice == 1)
            {
                for(int i=0;i<3;i++){
                cout << "Enter Student name(limit is 3): ";
                cin>>students[i];
                cout << "Enter age: ";
                cin>>ages[i];
                }
            }
            else if(choice == 2)
            {
                cout << "All students are: "<<endl<<students[0]<<" age: "<<ages[0]<<endl<<students[1]<<" age: "<<ages[1]<<endl<<students[2]<<" age: "<<ages[2]<<endl;
            }
            else if(choice == 3)
            {
                for(int i=0;i<3;i++){
                cout << "Enter Courses: ";
                cin >> courses[i];
                }

                
            }
            else if(choice == 4)
            {
                cout << "All courses are: "<<endl<<courses[0]<<", "<<courses[1]<<", "<<courses[2]<<endl;
            }
            else if (choice == 5)
            {
                cout<<"Thank YOU! for using University Management System";
                break;
            }
        else    
            {
                cout << "Invalid Choice\n";
            } }}
    else
    {
        cout << "Too many incorrect attempts. Access Denied.\n"; }
    return 0;
}
