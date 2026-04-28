#include <iostream>
using namespace std;

bool isStrong(int num)
{

    int prev_fec = 0;
    for (int i = num; i != 0; i /= 10)
    {
        int last_digi = i % 10;
        int fact = 1;
        for (int j = 1; j <= last_digi; j++)
        {
            fact *= j;
        }
        prev_fec += fact;
    }

    if (prev_fec == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

main()
{

    float num;
    cout << "Enter num: ";
    cin >> num;

    if (isStrong(num))
    {
        cout << "Strong Number";
    }
    else
    {
        cout << "Not Strong Number";
    }
}