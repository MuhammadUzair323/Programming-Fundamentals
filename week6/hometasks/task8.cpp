#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of flights: ";
    cin>>n;
    cout<<endl;
    string flightnum[n];
    string destinations[n];
    float seats[n];
    int count=0;
    for(int i=0;i<n;i++){
        cout<<"Enter Flight number for Flight "<<i+1<<" : ";
        cin>>flightnum[i];
        cout<<"Enter Destination of Flight "<<flightnum[i]<<" : ";
        cin>>destinations[i];
        cout<<"Enter seats available for Flight "<<flightnum[i]<<" : ";
        cin>>seats[i];
        cout<<endl;
    }
    
    cout<<endl;
    cout<<"Flight Information"<<endl;
    cout<<"------------------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Flight "<<flightnum[i]<<" to "<<destinations[i]<<" has "<<seats[i]<<" seats available."<<endl;
    }
}