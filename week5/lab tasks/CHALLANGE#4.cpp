#include <iostream>
using namespace std;

int main()
{
    string pin="1234",userpin;
    int current_balance=1000;

    int choice;

    
    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter pin: ";
        cin >>userpin;

        if(userpin == "1234")
        {
cout << "Login Successful"<<endl;
            break;
        }
        else
        {
            cout << "Wrong Pin"<<endl;
        }

        if(i == 3 && !(userpin == "1234"))
        {
            cout << "Too many attempts. Program End."<<endl;
            return 0;
        }
    }

    for(int i = 1; i <= 30; i++)
    {
        cout << endl<<"---- ATM ----"<<endl;
        cout << "1. Check Balance"<<endl;
        cout << "2. Deposit Money"<<endl;
        cout << "3. Withdraw Money"<<endl;
        cout << "4. Exit"<<endl;

        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Your current balance is: "<<current_balance<<" Rupees"<<endl;

        }
        else if(choice == 2)
        {
        
            {
               int deposit;cout << "Enter amount for deposit: "<<endl;
                cin>>deposit;
                current_balance=deposit+current_balance;
                cout<<"Amount Deposited Successfully!"<<endl;
            }
            
        }
        else if(choice == 3)
        {
           int withdraw;cout << "Enter amount for withdraw: ";
            cin >>withdraw;
           if(withdraw<=current_balance){
            current_balance=current_balance-withdraw;
            cout<<"PLease Collect your Money! "<<endl;
        
           }
           else{
            cout<<"Insufficient Balance!"<<endl;
           }
        
        }
        else if(choice == 4)
        {
            cout << "Program Exit"<<endl<<"Thank YOU, For using ATM !!";
            break;
        }
        else
        {
            cout << "Invalid Choice"<<endl;
        }
    }

    
}





















