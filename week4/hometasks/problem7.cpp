#include<iostream>
using namespace std;
int main(){
    float result;
    int sides;
    string input;
    cout<<"Please enter the figure name: ";

    cin>>input;
    if(input=="square"){
        cout<<"enter side: ";
         cin>>sides;
        result=sides*sides;
    }
    else if(input=="rectangle"){
        float length;cout<<"Enter length: ";
        cin>>length;
        float width;cout<<"Enter width";
        cin>>width;
        result=length*width;
    }
    else if(input=="circle"){
        float radius;cout<<"Enter radius: ";
        cin>>radius;
        float pi=3.14;
        result=pi*radius*radius;

    }
    else if(input=="triangle"){
        float base;cout<<"enter base: ";
        cin>>base;
        float height;cout<<"enter height: ";
        cin>>height;
        result=0.5*base*height;
    }
      cout<<"Area of figure is: "<<result;
}