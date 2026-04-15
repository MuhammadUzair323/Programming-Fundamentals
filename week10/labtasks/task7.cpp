#include<iostream>
#include<cmath>
using namespace std;
int main(){
    system("cls");
    double radian=57.2958;
    double height, distance, angle;
    cout<<"Enter horizontal distance: ";
    cin>>distance;
    cout<<"Enter Angle of elevation: ";
    cin>>angle;
    height=distance*tan(angle/radian);
    cout<<"Height of the tree is : "<<height<<" feet";

}