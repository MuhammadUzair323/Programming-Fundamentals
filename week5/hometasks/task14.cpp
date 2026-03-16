#include<iostream>
using namespace std;
int main(){
    int yeartarget, inheritence;
    cout<<"Enter Inheritence: ";
    cin>>inheritence;
    cout<<"Enter target year: ";
    cin>>yeartarget;
    int age=18;

    for(int year=1800;year<=yeartarget;year++){
        if(year % 2 == 0){
            inheritence-= 12000;
        
        }
        else{
            inheritence-=(12000+50*age);
        }
        age++;
    }
    if(inheritence>=0){
        cout<<"YES!, He will live a carefree life and will have "<<inheritence<<" dollars left";

    }
    else{
        cout<<"He will need "<<-inheritence<<" dollars to survive";
    }
}
