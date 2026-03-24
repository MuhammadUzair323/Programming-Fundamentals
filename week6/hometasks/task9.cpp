#include <iostream>
     using namespace std;
    int main() {
         string books[1000];
         int count=0;
        while (true) {
        int choice;

        cout << "\n===== Library System =====" << endl;
        cout << "1. Add book "<< endl;
        cout << "2. View book " << endl;
        cout << "3. Borrow book " << endl;
        cout<<  "4. Issue book "<< endl;
        cout<<  "5. Exit "<< endl;

        cout << "Enter your choice(1-5): ";
        cin >> choice;

        if (choice == 1) {
            int n;
            cout<<"Enter Number of books: ";
            cin>>n;
        
            for(int i=0;i<n;i++){
            cout << "Enter book name: " ;
            cin>>books[count];
            cout<<" You added a book: "<<books[count]<<endl;
            count++;
            }
        }
        else if (choice == 2) {
            cout << "Available Books are: "<<endl;
            for(int i=0;i<count;i++){
            cout<<books[i]<<endl;
            }
       }
        else if (choice == 3) {
             cout << "You Borrowed a book! " << endl;
          
        }
        else if (choice == 4){
            cout << "You Issued a book! " << endl;
        
        }
        
        else if(choice==5){
            cout<< "Exiting Library System!  GoodBye! ";
            break;
        }
        

   
}
 return 0;
}
