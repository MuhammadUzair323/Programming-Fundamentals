#include<iostream>
using namespace std;
void  printTotalNissanCars(int cars[][5], string colour);
int main()
{
    string colour="";
    cout<<"Enter colour: ";
    cin>>colour;
    const int rowSize = 5;
    const int colsize = 5;
    int cars[rowSize][colsize]={
        {10, 11, 21, 12, 32},
        {42, 22, 12, 12, 56},
        {53, 11, 24, 63, 12},
        {12, 53, 54, 82, 23},
        {12, 13, 12, 87, 86}
    };
    printTotalNissanCars(cars, colour);
    
    return 0;
}
void  printTotalNissanCars(int cars[][5],string colour){
     int col;
    if(colour=="Red"){
        col=0;
    }
    else if(colour=="Black"){
        col=1;
    }
    else if(colour=="Brown"){
        col=2;
    }
    else if(colour=="Blue"){
        col=3;
    }
    else if(colour=="Gray"){
        col=4;
    }
    cout<<"All cars for colour '"<<colour<<"' are : "<<endl;
    for(int i=0;i<5;i++){
        cout<<cars[i][col];
        cout<<endl;
    }

     
}