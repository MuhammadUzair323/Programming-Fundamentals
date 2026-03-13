#include<iostream>
using namespace std;
int main(){
    int holidays, workingdays, time, difference, mins, hours;
    cout<<"Holidays :";
    cin>>holidays;
    workingdays=365-holidays;
    time=(workingdays*63)+(holidays*127);
    difference=30000-time;
    hours=difference/60;
    mins=difference%60;
    if(time<=30000){
        cout<<"Tom will sleep well \n";
        cout<<hours<<" hour and "<<mins<< "minutes less for play"; 
    }
    
    else{
        cout<<"Tom will run away \n";
        cout<<hours<<" hour and "<<mins<< " mins for play"; 
    }
}