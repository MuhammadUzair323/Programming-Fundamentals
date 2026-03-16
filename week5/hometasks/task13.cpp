#include<iostream>
using namespace std;
int main(){
    int age;
    float toyprice, machineprice;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter machineprice: ";
    cin>>machineprice;
    cout<<"Enter toy price: ";
    cin>>toyprice;
    float totalmoney=0;
    int toycount=0;
    float currentgiftamount=10.00;

    for(int i=1;i<age;i++){
        if( i % 2 != 0 ){
            toycount++;
        }
        else {
            totalmoney+=currentgiftamount;
            totalmoney-=1.00;
            currentgiftamount+=10.00;

        }
    }
         totalmoney+=(toyprice*toycount);
         if(totalmoney>=machineprice){
            cout<<"YES! "<<endl<<totalmoney-machineprice;
         }
         else{
            cout<<"NO! "<<endl<<machineprice-totalmoney;
         }



}