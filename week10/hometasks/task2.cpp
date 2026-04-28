#include <iostream>
using namespace std;


double Pyramid_Vol(float l, float w, float h, string u){
    float vol=(1.0/3.0)*l*w*h;  //(1/3)will return 0 so use (1.0/3.0)
    if(u=="meters"){
        return vol;
    }else if(u=="millimeters"){
        vol*=1000000000;
        
    }else if(u=="centimeters"){
        vol*=1000000;
    }else if(u=="kilometers"){
        vol*=0.000000001;
    }
    else{
        vol=-1;
    }
    return vol;
}


main(){
    float length, width, height;
    cout<<"Enter length, width and height in meters: ";
    cin>>length>>width>>height;
    string unit;
    cout<<"Enter unit (millimeters, centimeters, meters, kilometers): ";
    cin>>unit;
    double py_vol = Pyramid_Vol(length, width, height, unit);
    if(py_vol==-1){
    cout<<"Enter correct input!";
    }else{
        cout<<py_vol<<" cubic "<<unit;
    }
}