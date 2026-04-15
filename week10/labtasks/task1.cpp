#include<iostream>
using namespace std;
void add(int number1, int number2);

int main()
{
    system("cls");
    int number1, number2;
    cout<<"Enter number 1: ";
    cin>>number1;
    cout<<"Enter number 2: ";
    cin>>number2;
    add(number1, number2);

    return 0;
}
void add(int number1, int number2)
{
    cout<<"Sum : "<<number1+number2;

}
