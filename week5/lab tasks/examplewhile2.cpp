#include <iostream>
using namespace std;
main()
{
    int value;
    cout << "Please enter a Positive Number: ";
    cin >> value;
    while (value <= 0)
    {                                                                          
        cout << "Error: " << value << " is not a Positive Number." << endl;
        cout << "Please enter a Positive Number: ";
        cin >> value;
    }
    cout << "Program Ends" << endl;
}
