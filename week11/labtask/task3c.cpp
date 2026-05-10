#include<iostream>
using namespace std;
void  printTotalNissanCars(int cars[][5], int rowSize);
int main()
{
    const int rowSize = 5;
    const int colsize = 5;
    int cars[rowSize][colsize]={
        {10, 11, 21, 12, 32},
        {42, 22, 12, 12, 56},
        {53, 11, 24, 63, 12},
        {12, 53, 54, 82, 23},
        {12, 13, 12, 87, 86}
    };
    printTotalNissanCars(cars, rowSize);
    
    return 0;
}
void  printTotalNissanCars(int cars[][5], int rowSize){
       int total=0;
       for(int i=0;i<5;i++){
        total=total+cars[2][i];
       }
       cout<<"Total Number of Nissan cars are : "<<total;
}