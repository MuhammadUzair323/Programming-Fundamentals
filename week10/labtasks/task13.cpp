#include<iostream>
using namespace std;
string timeTravel(int hours, int minutes){

    int totalMinutes=minutes+15;
    int newMinutes=totalMinutes%60;
    int extraHour=totalMinutes/60;
    int newHours=(hours+extraHour)%24;
    return to_string(newHours)+ ":" +to_string(newMinutes);
}
int main(){
    int hours;
    int minutes;
    cout<<"Enter hours(24 hour format): ";
    cin>>hours;
    cout<<"Enter minutes: ";
    cin>>minutes;
    cout<<" Arrival time: "<<timeTravel(hours, minutes);

}