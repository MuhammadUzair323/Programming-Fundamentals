#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of resistors in series: ";
    cin>>n;
    float resis[n];
    for(int i=0;i<n;i++){
        cin>>resis[i];
    }
    
    float sum=0;
    for(int i=0;i<n;i++){
        sum=sum+resis[i];
    }
    cout<<"total Resistance of the series circuit is: "<<sum<<" ohms."<<endl;
}