#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of customers: ";
    cin>>n;
    string cust[n];
    for(int i=0;i<n;i++){
        cin>>cust[i];
    }
    char c;
    cout<<"Enter character: ";
    cin>>c;
    int count=0;
    for(int i=0;i<n;i++){
        if(cust[i][0]==c){
            count++;
        }

    }
    cout<<"Total names starting with "<<c<<" are "<<count;
}