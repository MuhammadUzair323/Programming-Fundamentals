#include <iostream>
#include <conio.h>
using namespace std;

// ALL functions prototypes
void mainHeader();

// ALL data structures
string mainoptions;
const int max_capacity = 1000;

string petNames[max_capacity] = {"Whiskers", "Tracker", "Duke", "Luna"};
string petTypes[max_capacity] = {"Domestic", "Field & Sport", "Field & Sport", "Domestic"};
string petBreeds[max_capacity] = {"Persian", "Pointer", "Labrador", "Siamese"};
int petAges[max_capacity] = {2, 3, 2, 1};
float petHealth[max_capacity] = {92.5, 98.0, 99.0, 88.0};
string petTraits[max_capacity] = {"Calm", "Fast Tracker", "Great Swimmer", "Playful"};
double donatedMoney = 100;
double totalAdoptedMoney = 500;
double fixFeeForAdoption = 1000;
// Transaction History Data Structures
const int history_size = 10;
string historyType[history_size]; // "Adoption" or "Donation"
double historyAmount[history_size];
string historyDetail[history_size]; // Pet name or Donor note
int historyCount = 0;               // Tracks how many transactions have occurred

int petCount = 4;

// main function
int main()
{
    mainHeader();
}

// all functions
void mainHeader()
{
    while (true) // While loop for main homescreen
    {
        system("cls");
        cout << "\n====================================================" << endl;
        cout << "               PAW-SOME PETS & CO.                  " << endl;
        cout << "        - Pet Management & Adoption System -        " << endl;
        cout << "====================================================" << endl;
        cout << "\n  [ LOGIN AS ]" << endl;
        cout << "  1. Administrative Staff" << endl;
        cout << "  2. Pet Donor" << endl;
        cout << "  3. Customer / Adopter" << endl;
        cout << "  4. Exit Application" << endl;
        cout << "\n----------------------------------------------------" << endl;
        cout << "  [?] Select your role --> ";
        cin >> mainoptions;
    }
}