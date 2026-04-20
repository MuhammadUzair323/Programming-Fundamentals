#include <iostream>
using namespace std;
void oddishOrEvenish(int num)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        int lastDigit;
        lastDigit = num % 10;     
        sum = sum + lastDigit;
        num=num/10;
    }
    if(sum%2==0){
        cout<<"Evenish";
    }else{
        cout<<"Oddish";
    }
}

int main()
{
    cout<<"Enter a number : ";
    int number;
    cin>>number;
    oddishOrEvenish(number);
    return 0;
}
