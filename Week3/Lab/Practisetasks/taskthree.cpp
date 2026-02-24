#include<iostream>
using namespace std;
main()
{
    int frame, min, fps;
 cout<<"Please enter minutes: ";
 cin>>min;
 cout<<"Please enter fps: ";
 cin>>fps;
 frame=min*fps*60;
 cout<<"Total Number of frames:"<<frame;
}