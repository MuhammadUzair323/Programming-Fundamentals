#include <iostream>
using namespace std;

string projectTimeCalculation(int hours, int days, int workers){
    int calc = ((days-(days*0.10))*10);
    int hours_left = hours-calc;
    if(hours_left<0){
        hours_left=-1*hours_left;
    }
    string result;
    if(calc<hours){
        result = "Not enough time! "+to_string(hours_left)+" hours needed.";
    }else{
        result = "Yes! "+to_string(hours_left)+" hours left.";

    }
    return result;
}

main(){

    int hours;
    cout<<"Enter needed hours: ";
    cin>>hours;
    int days;
    cout<<"Enter number of days fo firm: ";
    cin>>days;
    int workers;
    cout<<"Enter number of workers: ";
    cin>>workers;
    cout<<projectTimeCalculation(hours,days,workers);

}