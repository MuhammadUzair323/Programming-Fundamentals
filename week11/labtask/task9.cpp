#include <iostream>
using namespace std;

char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};

bool gravity = false;
bool isBlackHole = true;

void displayWorld()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-------------------" << endl;
}

void setGravityStatus(bool status)
{
    gravity = status;
}

void timeTick(int times)
{
    if (!gravity)
        return;

    for (int t = 0; t < times; t++)
    {
        for (int i = 4; i >= 0; i--)
        {
            for (int j = 0; j < 5; j++)
            {
                if (objects[i][j] == '#')
                {

                    if (isBlackHole && i == 4)
                    {
                        objects[i][j] = '-';
                        objects[0][j] = '#';
                    }

                    else if (i < 4 && objects[i + 1][j] == '-')
                    {
                        objects[i + 1][j] = '#';
                        objects[i][j] = '-';
                    }
                }
            }
        }
    }
}

int main()
{
    cout << "Initial World:" << endl;
    displayWorld();

    setGravityStatus(true);
    cout << "After TimeTick(1):" << endl;
    timeTick(1);
    displayWorld();

    return 0;
}