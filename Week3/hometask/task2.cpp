#include<iostream>
using namespace std;
main()
{
    int frames, fps, minutes;
    cout<<"PLease enter no of frames (FPS): ";
    cin>>fps;
    cout<<"PLease enter total minutes: ";
    cin>>minutes;
    frames=fps*minutes*60;
    cout<<"Total number of frames:"<<frames;
}