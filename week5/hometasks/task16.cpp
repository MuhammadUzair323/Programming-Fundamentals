#include <iostream>
     using namespace std;
    int main() {
           while (true) {
        int choice;

        cout << "\n===== Calculator =====" << endl;
        cout << "1. Addition "<< endl;
        cout << "2. Substraction " << endl;
        cout << "3. Multiplication " << endl;
        cout<<  "4. Division "<< endl;
        cout<<  "5. Clear Screen "<< endl;
        cout<<  "6. Exit "<< endl;

        cout << "Enter your choice(1-6): ";
        cin >> choice;

        if (choice == 1) {
            int num1,num2,sum;
            cout << "Enter First Number: " ;
            cin>>num1;
            cout << "Enter Second Number: ";
            cin>>num2;
            sum=num1+num2;
            cout<<"\n";
            cout<<" Result : "<<num1<<" + "<<num2<<" = "<<sum<<endl;
        }
        else if (choice == 2) {
            int num1,num2,substract;
            cout << "Enter First Number: " ;
            cin>>num1;
            cout << "Enter Second Number: ";
            cin>>num2;
            substract=num1-num2;
            cout<<"\n";
            cout<<" Result: "<<num1<<" - "<<num2<<" = "<<substract<<endl;
       }
        else if (choice == 3) {
             int num1,num2,multiply;
            cout << "Enter First Number: " ;
            cin>>num1;
            cout << "Enter Second Number: ";
            cin>>num2;
            multiply=num1*num2;
            cout<<"\n";
            cout<<" Result: "<<num1<<" x "<<num2<<" = "<<multiply<<endl;
          
        }
        else if (choice == 4){
            float num1,num2,divide;
            cout << "Enter First Number: " ;
            cin>>num1;
            cout << "Enter Second Number: ";
            cin>>num2;
            divide=num1/num2;
            cout<<"\n";
            if(num2==0){
                cout<<"Undefined! ";
            }
            cout<<" Result: "<<num1<<" / "<<num2<<" = "<<divide<<endl;
        
        }
        else if(choice==5){
            cout<< "Screen is Cleared! ";
        }
        else if(choice==6){
            cout<< "Exiting Calculator!  Thank YOU!";
            break;
        }
        

   
}
 return 0;
}
