#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of products: ";
    cin>>n;
    string productNames[n];
    float prices[n];
    float total[n];
    int quantities[n];
    for(int i=0;i<n;i++){
        cout<<"Enter name of product "<<i+1<<" : ";
        cin>>productNames[i];
        cout<<"Enter price of "<<productNames[i]<<" : $";
        cin>>prices[i];
        cout<<"Enter quantity of "<<productNames[i]<<" : ";
        cin>>quantities[i];
        cout<<endl;
        total[i]=prices[i]*quantities[i];
    }
    
    cout<<endl;
    cout<<"Product Inventory Report"<<endl;
    cout<<"------------------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<productNames[i]<<": $"<<prices[i]<<", "<<quantities[i]<<" in stock, Total value: $"<<total[i]<<endl;
    }
}