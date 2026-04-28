#include <iostream>
using namespace std;

float calculateBalance(float balance, int years)
{

    float interest;
    if(balance<10000){
        interest = balance*0.05;
    }
    else if(balance>=10000 && balance<=50000){
        interest = balance*0.07;
    }
    else{
        interest = balance*0.10;
    }

    if(years>=3){
        interest+=balance*0.02;
    }
    float total_bal = balance+interest;
    return total_bal;
}

main()
{

    float balance;
    cout << "Enter balance: ";
    cin >> balance;
    int years;
    cout << "Enter years: ";
    cin >> years;

  cout<<"Updated Balance: "<<calculateBalance(balance, years);

}