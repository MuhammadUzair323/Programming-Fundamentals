#include<iostream>
using namespace std;
main()
{
    int n, angle;
    cout<<"PLease enter no of sides of Polygon (greater than or = three): ";
    cin>>n;
    angle=(n-2)*180;
    cout<<"Sum of angles:"<<angle<<" degrees";
}