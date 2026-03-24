#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    string name[n];
    cout<<"Enter the Name of "<<n<<" students one by one: "<<endl;
    for(int i=0;i<n;i++){
        cin>>name[i];
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            
            if(name[j] > name[j+1]) {
                string temp = name[j];
                name[j] = name[j+1];
                name[j+1] = temp;
            }
        }
    }

    cout << "\nStudents in alphabetical order:" << endl;
    for(int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }
}