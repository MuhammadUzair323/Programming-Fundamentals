#include<iostream>
using namespace std;
main()
{
    int points, win, loss, draw;
    cout<<"Enter Wins of your team: ";
    cin>>win;
    cout<<"Enter losses of your team: ";
    cin>>loss;
    cout<<"Enter Draws of your team: ";
    cin>>draw;
    points=(win*7)+(loss*0)+(draw*1);
    cout<<"Points of your team are:"<<points;

}    