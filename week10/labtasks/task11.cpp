#include <iostream>
using namespace std;
bool checkSymmetry(int number);

int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;
    if(checkSymmetry(number)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
bool checkSymmetry(int number)
{
    int firstDigit = number / 100;
    int lastDigit = number % 10;
    if (firstDigit == lastDigit)
    {
        return true;
    }
    else
    {
        return false;
    }
}