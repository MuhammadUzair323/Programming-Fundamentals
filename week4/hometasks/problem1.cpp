#include<iostream>
using namespace std;
int main(){
    string country;
    float price, finalp;
    int discount;
    cout<<"Enter country name: ";
    cin>>country;
    cout<<"Ticket price: ";
    cin>>price;
     if(country=="Ireland"){
       discount=price*0.10;
     }
    else{
        discount=price*0.05;
    }
    finalp=price-discount;
    cout<<"Discounted Price: "<<finalp;


}