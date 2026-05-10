#include<iostream>
using namespace std;
void  printToyotaBlueCars(int cars[][5], int rowSize);
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
    printToyotaBlueCars(cars, rowSize);
    
    return 0;
}
void  printToyotaBlueCars(int cars[][5], int rowSize){
       cout<<"Toyota Blue cars are: "<<cars[1][3];
}