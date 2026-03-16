#include <iostream>
     using namespace std;
    int main() {
           while (true) {
        int choice;

        cout << "\n===== Restaurant Management System =====" << endl;
        cout << "1. View Food Menu "<< endl;
        cout << "2. Place Order " << endl;
        cout << "3. View Order Status " << endl;
        cout<<  "4. Generate bill "<< endl;
        cout<<  "5. Contact staff "<< endl;
        cout<<  "6. Exit "<< endl;

        cout << "Enter your choice(1-6): ";
        cin >> choice;

        if (choice == 1) {
            cout << "You selected: View Food Menu. " << endl;
        }
        else if (choice == 2) {
            cout << "You selected: Place Order. " << endl;
       }
        else if (choice == 3) {
             cout << "You selected: View Order Status. " << endl;
          
        }
        else if (choice == 4){
            cout << "Your selected: Generate bill. " << endl;
        
        }
        else if(choice==5){
            cout<< "You Selected: Contact Staff.";
        }
        else if(choice==6){
            cout<< "Exiting Restaurant Management System!  Thank YOU!";
            break;
        }
        

   
}
 return 0;
}
