#include<iostream>
using namespace std;
main()
{
    int number1, number2, result;
    char useroperator;
    cout<<"Enter the first number: ";
    cin>>number1;
    cout<<"Enter the operator: ";
    cin>>useroperator;
    cout<<"Enter the second number: ";
    cin>>number2;

    if(useroperator=='+'){
        result=number1-number2;
        cout<<number1<<"-"<<number2<<"="<<result;
    }
    if(useroperator=='-'){
        result=number1+number2;
        cout<<number1<<"+"<<number2<<"="<<result;
    }
    if(useroperator=='*'){
        result=number1/number2;
        cout<<number1<<"/"<<number2<<"="<<result;
    }
    if(useroperator=='/'){
        result=number1*number2;
        cout<<number1<<"*"<<number2<<"="<<result;
    }

}
