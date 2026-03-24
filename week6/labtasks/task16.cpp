#include<iostream>
using namespace std;
int main(){
    float numof[4];
    cout<<"Enter num of quarters: ";
    cin>>numof[0];
    cout<<"Enter num of dimes: ";
    cin>>numof[1];
    cout<<"Enter num of nickels: ";
    cin>>numof[2];
    cout<<"Enter num of pennies: ";
    cin>>numof[3];
    cout<<endl;
    float total=numof[0]*0.25+numof[1]*0.10+numof[2]*0.05+numof[3]*0.01;
    float totalamount=0;
    cout<<"Enter the total amount due: ";
    cin>>totalamount;
    if(totalamount<=total){
        cout<<"Can you pay the amount? : YES";
    }
    else{
        cout<<"Can you pay the amount? : NO";
    }
    
    

}
    
