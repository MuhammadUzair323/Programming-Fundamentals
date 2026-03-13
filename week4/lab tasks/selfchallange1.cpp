#include<iostream>
using namespace std;
main()
{
    float bill;
    cout<<"PLease Enter your bill: ";
    cin>>bill;
    if(bill<=5000){
        cout<<"your discounted bill is: "<<bill-bill*5/100;
    }
        if(bill>5000){
        cout<<"your discounted bill is: "<<bill-bill*10/100;

    }

}
