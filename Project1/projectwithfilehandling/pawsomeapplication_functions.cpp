#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

//GLOBAL DATA ARRAYS
const int max_capacity = 1000;

string petNames[max_capacity]  = {"Whiskers", "Tracker", "Duke", "Luna"};
string petTypes[max_capacity]  = {"Domestic", "Field & Sport", "Field & Sport", "Domestic"};
string petBreeds[max_capacity] = {"Persian", "Pointer", "Labrador", "Siamese"};
int    petAges[max_capacity]   = {2, 3, 2, 1};
float  petHealth[max_capacity] = {92.5, 98.0, 99.0, 88.0};
string petTraits[max_capacity] = {"Calm", "Fast Tracker", "Great Swimmer", "Playful"};

double donatedMoney      = 100;
double totalAdoptedMoney = 500;
double fixFeeForAdoption = 1000;

// Transaction history arrays
const int history_size = 10;
string historyType[history_size];
double historyAmount[history_size];
string historyDetail[history_size];
int    historyCount = 0;

int petCount = 4;

// Important Credentials 
string adminUsername = "admin";
string adminPassword = "123";
string eraseSpecialKey = "1A2B3C";


// Convert string to lowercase
// Manual ASCII lowercase conversion (using this method for case-insensitive search)
string toLower(string str)
{
    for (int j = 0; j < str.length(); j++)
    {
        if (str[j] >= 65 && str[j] <= 90) // if capital
            str[j] = str[j] + 32;          // making it lowercase by adding 32
    }
    return str;
}


// Display a single pet record
void displayPetRecord(int i)
{
    cout << "[ ID: " << i + 1 << " ]--------------------------------" << endl;
    cout << "  Name   : " << petNames[i] << endl;
    cout << "  Type   : " << petTypes[i] << " (" << petBreeds[i] << ")" << endl;
    cout << "  Status : " << petAges[i] << " yrs | Health: " << petHealth[i] << "%" << endl;
    cout << "  Traits : " << petTraits[i] << endl;
}


// Swap two pets in all arrays
// Swaps all parallel array data at positions j and j+1
void swapPets(int j)
{
    float  tempHealth = petHealth[j]; petHealth[j] = petHealth[j+1]; petHealth[j+1] = tempHealth;
    string tempName   = petNames[j];  petNames[j]  = petNames[j+1];  petNames[j+1]  = tempName;
    string tempType   = petTypes[j];  petTypes[j]  = petTypes[j+1];  petTypes[j+1]  = tempType;
    string tempBreed  = petBreeds[j]; petBreeds[j] = petBreeds[j+1]; petBreeds[j+1] = tempBreed;
    int    tempAge    = petAges[j];   petAges[j]   = petAges[j+1];   petAges[j+1]   = tempAge;
    string tempTrait  = petTraits[j]; petTraits[j] = petTraits[j+1]; petTraits[j+1] = tempTrait;
}


// Remove pet at a given index
// Shifts all entries left to fill the gap then decrements petCount. Proper Deletion
void removePetAt(int found_index)
{
    for (int i = found_index; i < petCount - 1; i++)
    {
        petNames[i]  = petNames[i+1];
        petTypes[i]  = petTypes[i+1];
        petBreeds[i] = petBreeds[i+1];
        petAges[i]   = petAges[i+1];
        petHealth[i] = petHealth[i+1];
        petTraits[i] = petTraits[i+1];
    }
    petCount--;
}


// Add transaction to history
void addHistory(string type, double amount, string detail)
{
    if (historyCount < history_size)
    {
        historyType[historyCount]   = type;
        historyAmount[historyCount] = amount;
        historyDetail[historyCount] = detail;
        historyCount++;
    }
}


// Save all pet data to file
void savePetsToFile()
{
    ofstream petFile("pets.txt");
    petFile << petCount << "\n";
    for (int i = 0; i < petCount; i++)
    {
        petFile << petNames[i]  << "\n";
        petFile << petTypes[i]  << "\n";
        petFile << petBreeds[i] << "\n";
        petFile << petAges[i]   << "\n";
        petFile << petHealth[i] << "\n";
        petFile << petTraits[i] << "\n";
    }
    petFile.close();
}


// Load all pet data from file
void loadPetsFromFile()
{
    ifstream petFile("pets.txt");
    petFile >> petCount;
    petFile.ignore();
    for (int i = 0; i < petCount; i++)
    {
        getline(petFile, petNames[i]);
        getline(petFile, petTypes[i]);
        getline(petFile, petBreeds[i]);
        petFile >> petAges[i];
        petFile >> petHealth[i];
        petFile.ignore();
        getline(petFile, petTraits[i]);
    }
    petFile.close();
}


// Save financial data to file
void saveFinanceToFile()
{
    ofstream finFile("finance.txt");
    finFile << donatedMoney      << "\n";
    finFile << totalAdoptedMoney << "\n";
    finFile << fixFeeForAdoption << "\n";
    finFile.close();
}


// Load financial data from file
void loadFinanceFromFile()
{
    ifstream finFile("finance.txt");
    finFile >> donatedMoney;
    finFile >> totalAdoptedMoney;
    finFile >> fixFeeForAdoption;
    finFile.close();
}


// Save transaction history to file
void saveHistoryToFile()
{
    ofstream hisFile("history.txt");
    hisFile << historyCount << "\n";
    for (int i = 0; i < historyCount; i++)
    {
        hisFile << historyType[i]   << "\n";
        hisFile << historyAmount[i] << "\n";
        hisFile << historyDetail[i] << "\n";
    }
    hisFile.close();
}


// Load transaction history from file
void loadHistoryFromFile()
{
    ifstream hisFile("history.txt");
    hisFile >> historyCount;
    hisFile.ignore();
    for (int i = 0; i < historyCount; i++)
    {
        getline(hisFile, historyType[i]);
        hisFile >> historyAmount[i];
        hisFile.ignore();
        getline(hisFile, historyDetail[i]);
    }
    hisFile.close();
}
// Saving Credentials
void savingCredentials()
{
    ofstream credFile("Credentials.txt");
    credFile<<adminUsername<<"\n";
    credFile<<adminPassword<<"\n";
    credFile<<eraseSpecialKey<<"\n";
    credFile.close();

}
// Loading Credentials
void loadingCredentials()
{
    ifstream credFile("Credentials.txt");
    getline(credFile, adminUsername);
    getline(credFile, adminPassword);
    getline(credFile, eraseSpecialKey);
    

}



// Saving all data
void saveAllData()
{
    savePetsToFile();
    saveFinanceToFile();
    saveHistoryToFile();
    savingCredentials();
}


// Loading all data
void loadAllData()
{
    loadPetsFromFile();
    loadFinanceFromFile();
    loadHistoryFromFile();
    loadingCredentials();
}


// Admin menu: Display all pets
void adminDisplayAllPets()
{
    system("cls");
    cout << "================================================" << endl;
    cout << "           CURRENT PET INVENTORY                " << endl;
    cout << "================================================" << endl;
    cout << "\nTotal Pets: " << petCount << endl;

    for (int i = 0; i < petCount; i++)
    {
        cout << "[ ID: " << i + 1 << " ]----------------------------------------" << endl;
        cout << "  Name   : " << petNames[i] << endl;
        cout << "  Type   : " << petTypes[i] << " (" << petBreeds[i] << ")" << endl;
        cout << "  Status : " << petAges[i] << " yrs | Health: " << petHealth[i] << "%" << endl;
        cout << "  Traits : " << petTraits[i] << endl;
    }
    cout << "----------------------------------------" << endl;
    cout << "Press any key to return...";
    getch();
    system("cls");
}


// Admin menu: Search pet by name
void adminSearchPet()
{
    while (true)
    {
        system("cls");
        string searchmenuoption;
        cout << "=====================================\n";
        cout << "          Searching Pets             \n";
        cout << "=====================================\n\n";
        cout << "---> 1.Search\n";
        cout << "---> 2.Go back\n";
        cout << "  Enter you choice : ";
        cin >> searchmenuoption;

        if (searchmenuoption == "1")
        {
            system("cls");
            cout << "Enter the name you want to search: ";
            string searchName;
            cin.ignore();
            getline(cin, searchName);

            bool isFound = false;
            for (int i = 0; i < petCount; i++)
            {
                if (toLower(petNames[i]) == toLower(searchName))//using tolower function i made to search with case insenstiveness
                {
                    displayPetRecord(i);
                    isFound = true;
                    cout << "\nPress any key to go back...";
                    getch();
                    break;
                }
            }
            if (!isFound)
            {
                cout << "No record Found for : " << searchName << endl;
                cout << "Press any key to go back...";
                getch();
            }
        }
        else if (searchmenuoption == "2")
        {
            break;
        }
        else
        {
            cout << "Wrong selection!\n";
            cout << "Press any key to continue...";
            getch();
        }
    }
}


// Admin menu: Sort pets by health (bubble sort, highest first)
void sortByHealth()
{
    for (int i = 0; i < petCount - 1; i++)
        for (int j = 0; j < petCount - i - 1; j++)
            if (petHealth[j] < petHealth[j + 1])
                swapPets(j);

    cout << "Successfully sorted All by health! Use Display All to check..." << endl;
    cout << "\nPress any key to continue...";
    getch();
}


// Admin menu: Sort pets by age (bubble sort, oldest or youngest first)
void sortByAge()
{
    int sortageOptions;
    system("cls");
    // Menu for age sort methods
    cout << "---> 1. Oldest to Youngest\n";
    cout << "---> 2. Youngest to Oldest\n";
    cout << "       Enter your selection : ";
    cin >> sortageOptions;

    if (sortageOptions == 1)
    {
        for (int i = 0; i < petCount - 1; i++)
            for (int j = 0; j < petCount - i - 1; j++)
                if (petAges[j] < petAges[j + 1])
                    swapPets(j);

        cout << "Successfully sorted All by age(Oldest to Youngest) !!\n Use Display All to check..." << endl;
    }
    else if (sortageOptions == 2)
    {
        for (int i = 0; i < petCount - 1; i++)
            for (int j = 0; j < petCount - i - 1; j++)
                if (petAges[j] > petAges[j + 1])
                    swapPets(j);

        cout << "Successfully sorted All by age(Youngest to oldest) !!\n Use Display All to check..." << endl;
    }
    cout << "\nPress any key to continue...";
    getch();
}


// Admin menu: Sorting menu (health or age)
void adminSortMenu()
{
    while (true)
    {
        system("cls");
        int sortOptions;
        cout << "========================================\n";
        cout << "           Sorting of Pets              \n";
        cout << "========================================\n";
        cout << "---> 1.Sort by Health?(highest first) \n";
        cout << "---> 2.Sort by Age?\n";
        cout << "---> 3.Go Back\n";
        cout << "\nEnter you selection : ";
        cin >> sortOptions;

        if (sortOptions == 1)
        {
            sortByHealth();
        }
        else if (sortOptions == 2)
        {
            sortByAge();
        }
        else if (sortOptions == 3)
        {
            break;
        }
        else
        {
            cout << "Wrong Selection! Enter again! \n";
            cout << "Press any key to continue...";
            getch();
        }
    }
}


// Admin menu: Update pet information
void adminUpdatePet()
{
    system("cls");
    cout << "=====================================\n";
    cout << "           Updating Pets             \n";
    cout << "=====================================\n\n";
    cout << "Enter the name you want to update: ";
    string updateName;
    cin.ignore();
    getline(cin, updateName);

    bool isFound = false;
    for (int i = 0; i < petCount; i++)
    {
        if (toLower(petNames[i]) == toLower(updateName))
        {
            // showing old record first
            cout << "OLD Record of " << updateName;
            displayPetRecord(i);
            isFound = true;
            cout << "\n Press any key to continue...";
            getch();
            system("cls");

            // getting new data from user and replacing it with new 
            cout << "=====================================\n";
            cout << "           Updating Pets             \n";
            cout << "=====================================\n\n";
            cout << "Enter the new name for updating : ";
            string tempPetname;
            getline(cin, tempPetname);
            cout << "Enter the new type for updating : ";
            string tempPettype;
            getline(cin, tempPettype);
            cout << "Enter the new pet breed for updating : ";
            string tempPetbreeds;
            getline(cin, tempPetbreeds);
            cout << "Enter the new pet age for updating : ";
            int tempPetage;
            cin >> tempPetage;
            cin.ignore();
            cout << "Enter the new pet health for updating : ";
            double tempPethealth;
            cin >> tempPethealth;
            cin.ignore();
            cout << "Enter the new trait of the pet for updating : ";
            string tempPettrait;
            getline(cin, tempPettrait);

            // storing updated data back to arrays
            petNames[i]  = tempPetname;
            petTypes[i]  = tempPettype;
            petBreeds[i] = tempPetbreeds;
            petAges[i]   = tempPetage;
            petHealth[i] = tempPethealth;
            petTraits[i] = tempPettrait;

            saveAllData();
            cout << "Successfully updated the Data...  Check 'search by name' or 'display all' to confirm";
            break;
        }
    }
    if (!isFound)
        cout << "No record Found for : " << updateName << endl;

    cout << "\nPress any key to return to Admin Menu...";
    getch();
    system("cls");
}


// Admin menu: Delete a pet record
void adminDeletePet()
{
    system("cls");
    cout << "=====================================\n";
    cout << "           Removing Pets             \n";
    cout << "=====================================\n\n";
    cout << "Enter the pet name you want to delete: ";
    string deleteName;
    cin.ignore();
    getline(cin, deleteName);

    bool isFound = false;
    int found_index = -1;

    for (int i = 0; i < petCount; i++)
    {
        if (toLower(petNames[i]) == toLower(deleteName))
        {
            cout << "        Record of " << deleteName << endl;
            displayPetRecord(i);
            isFound = true;
            found_index = i;
            cout << "press any key to continue...";
            getch();
            system("cls");

            // remove pet from arrays proper deletion meaning shifting the elements from right side 
            removePetAt(found_index);

            saveAllData();
            cout << "=====================================\n";
            cout << "           Removing Pets             \n";
            cout << "=====================================\n\n";
            cout << "Succesfully Deleted Record of " << deleteName;
            break;
        }
    }
    if (!isFound)
        cout << "No record Found for : " << deleteName << endl;

    cout << "\nPress any key to return to Admin Menu...";
    getch();
    system("cls");
}


// Admin menu: inventory statistics
void adminInventoryStats()
{
    system("cls");
    while (true)
    {
        if (petCount == 0)
        {
            cout << "Inventory is empty!";
            break;
        }
        else
        {
            int domesticCount = 0, fieldsportCount = 0;
            int oldidx = 0, youngidx = 0;

            //count domestic and field & sport pets
            for (int i = 0; i < petCount; i++)
            {
                if (petTypes[i] == "Domestic" || petTypes[i] == "domestic")
                    domesticCount++;
                if (petTypes[i] == "Field & Sport" || petTypes[i] == "Field and Sport")
                    fieldsportCount++;
            }

            //find oldest and youngest pets
            for (int i = 0; i < petCount; i++)
            {
                if (petAges[i] > petAges[oldidx])   oldidx   = i;
                if (petAges[i] < petAges[youngidx]) youngidx = i;
            }

            //display statistics
            cout << "=======================================\n";
            cout << "          Inventory Statistics         \n";
            cout << "=======================================\n\n";
            cout << " --->   Domestic pets : " << domesticCount << "\n";
            cout << " --->   Field & Sport pets : " << fieldsportCount << "\n";
            cout << " --->   Oldest pet : " << petNames[oldidx] << "\n";
            cout << " --->   Youngest pet : " << petNames[youngidx] << "\n\n";
            cout << "=======================================\n\n";
            cout << " Press any key to go back..." << endl;
            getch();
            break;
        }
    }
}


// Admin menu: view donation bank balance
void adminViewDonations()
{
    system("cls");
    cout << "=============================================\n";
    cout << "               Donation Money                \n";
    cout << "=============================================\n";
    cout << "   Donation Bank Balance : " << donatedMoney << " PKR";
    cout << "\nPress any key to go back...";
    getch();
}


// Admin menu: view adoption revenue
void adminViewAdoptionRevenue()
{
    system("cls");
    cout << "=============================================\n";
    cout << "               Adoption Fee Money                \n";
    cout << "=============================================\n";
    cout << "   Adoption Fee Bank Balance : " << totalAdoptedMoney << " PKR";
    cout << "\nPress any key to go back...";
    getch();
}


// Admin menu: view transaction history
void adminViewTransactionHistory()
{
    system("cls");
    cout << "================================================" << endl;
    cout << "           RECENT TRANSACTION HISTORY           " << endl;
    cout << "================================================" << endl;

    if (historyCount == 0)
    {
        cout << "\n   No transactions recorded yet." << endl;
    }
    else
    {
        for (int i = 0; i < historyCount; i++)
        {
            cout << i + 1 << ". [" << historyType[i] << "]" << endl;
            cout << "    Amount : " << historyAmount[i] << " PKR" << endl;
            cout << "    Details: " << historyDetail[i] << endl;
            cout << "----------------------------------------------------" << endl;
        }
    }
    cout << "\nPress any key to return...";
    getch();
}

// Admin menu: factory reset (clear all data)
void adminFactoryReset()
{
    while (true)
    {
        system("cls");
        string confirmationMsg;
        cout << "=======================================\n";
        cout << "            FACTORY RESET              \n";
        cout << "=======================================\n\n";
        cout << "[1] Are you sure you want to erase all data?(yes/no) : " << endl;
        cout << "[2] Go back" << endl << endl;
        cout << "---------------------------------------\n";
        cout << "[?] Select an action -->(yes/no for [1] or '2' for [2]) : ";
        cin >> confirmationMsg;

        if (confirmationMsg == "yes")
        {
            string tempSpecialKey;
            cout << "Please Enter the special key : "; // special key needed to confirm reset
            cin >> tempSpecialKey;
            if (tempSpecialKey == eraseSpecialKey)
            {
                // Reset all counts and balances to zero
                petCount         = 0;
                historyCount     = 0;
                donatedMoney     = 0;
                totalAdoptedMoney = 0;
                saveAllData();
                cout << "\n[SUCCESS] System has been restored to factory settings!" << endl;
                cout << "Press any key to continue...";
                getch();
                break;
            }
            else
            {
                cout << "You Entered Wrong key!! ";
                cout << "\nPress any key to go back...";
                getch();
            }
        }
        else if (confirmationMsg == "no")
        {
            cout << "Press any key to go back...";
            getch();
        }
        else if (confirmationMsg == "2")
        {
            break;
        }
        else
        {
            cout << "\n\nYou entered the wrong action!!\n";
            cout << "Press any key to continue...";
            getch();
        }
    }
}


// Admin: login logic (3 attempts)
// Returns true if login was successful,else false
bool adminLogin()
{
    for (int i = 0; i < 3; i++)
    {
        system("cls");
        cout << "\n====================================================" << endl;
        cout << "               ADMINISTRATIVE ACCESS                " << endl;
        cout << "====================================================" << endl;
        cout << "\n  [!] Security Check Required" << endl;
        cout << "Admin Menu : (LOGIN ATTEMPT : " << i + 1 << ")" << endl;

        string username, password;
        cout << "Enter User name: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        if (username == adminUsername && password == adminPassword) // compare credentials
        {
            cout << "Successfully Logged in!" << endl;
            system("cls");
            return true;
        }
        else
        {
            if (i < 2)
            {
                cout << "You've Entered wrong username or password!" << endl;
                cout << "\nPress any key to continue...";
                getch();
            }
        }
    }
    return false;
}


// Admin menu: full admin dashboard menu
void adminMenu()
{
    bool loginSuccess = adminLogin();

    if (loginSuccess)
    {
        while (true)
        {
            system("cls");
            string adminoptions;
            cout << "\n====================================================" << endl;
            cout << "                ADMINISTRATIVE DASHBOARD            " << endl;
            cout << "====================================================" << endl;
            cout << "  [1] Display All Pets" << endl;
            cout << "  [2] Search Pet by Name" << endl;
            cout << "  [3] Sorting Pets (Age/Health)" << endl;
            cout << "  [4] Update Pet Information" << endl;
            cout << "  [5] Delete a Pet Record" << endl;
            cout << "  [6] Inventory Statistics" << endl;
            cout << "  [7] View Donation Bank" << endl;
            cout << "  [8] View Adoption Revenue" << endl;
            cout << "  [9] View Transaction History" << endl;
            cout << "  [10] Factory Reset (Delete all data)" << endl;
            cout << "  [11] Return to Main Menu" << endl;
            cout << "----------------------------------------------------" << endl;
            cout << "  [?] Select an action --> ";
            cin >> adminoptions;

            if      (adminoptions == "1")  adminDisplayAllPets();
            else if (adminoptions == "2")  adminSearchPet();
            else if (adminoptions == "3")  adminSortMenu();
            else if (adminoptions == "4")  adminUpdatePet();
            else if (adminoptions == "5")  adminDeletePet();
            else if (adminoptions == "6")  adminInventoryStats();
            else if (adminoptions == "7")  adminViewDonations();
            else if (adminoptions == "8")  adminViewAdoptionRevenue();
            else if (adminoptions == "9")  adminViewTransactionHistory();
            else if (adminoptions == "10") adminFactoryReset();
            else if (adminoptions == "11") break;
            else
            {
                cout << "Wrong selection! Enter again..." << endl;
                cout << "Press any key to continue...";
                getch();
            }
        }
    }
    else //login failed after 3 attempts
    {
        system("cls");
        cout << "Maximum login attempts reached. Access Denied!" << endl;
        cout << "Press any key to return to the main menu...";
        getch();
    }
}


// Donor menu: donate a pet to the shelter
void donorDonatePet()
{
    if (petCount < max_capacity) //only accept if shelter has some capacity
    {
        cin.ignore();
        cout << "Enter the name of the pet you want to Donate : ";
        string donateName;
        getline(cin, donateName);
        cout << "Enter the Pet's type : ";
        string donateType;
        getline(cin, donateType);
        cout << "Enter the Pet's breed : ";
        string donateBreed;
        getline(cin, donateBreed);
        cout << "Enter the Pet's age : ";
        int donateAge;
        cin >> donateAge;
        cout << "Enter the Pet's Health(in %) : ";
        double donateHealth;
        cin >> donateHealth;
        cin.ignore();
        cout << "Enter the Pet's trait (Usual Behaviour) : ";
        string donateTrait;
        getline(cin, donateTrait);

        // add new pet to arrays
        petNames[petCount]  = donateName;
        petTypes[petCount]  = donateType;
        petBreeds[petCount] = donateBreed;
        petAges[petCount]   = donateAge;
        petHealth[petCount] = donateHealth;
        petTraits[petCount] = donateTrait;
        petCount++;

        saveAllData();
        cout << "\n\n Successfully Donted Pet For a Good Cause <3";
        cout << "\n\nPress any key to continue...";
        getch();
    }
    else //shelter full notice
    {
        cout << "================================================" << endl;
        cout << "            NOTICE: SHELTER FULL                " << endl;
        cout << "================================================" << endl;
        cout << "We are currently at our maximum capacity of " << max_capacity << " pets." << endl;
        cout << "We cannot accept new donations at this time." << endl;
        cout << "\n[!] ALERT: A request has been sent to the Manager" << endl;
        cout << "    to increase storage capacity soon." << endl;
        cout << "\nPress any key to return...";
        getch();
    }
}


// Donor menu: donate money to the shelter
void donorDonateMoney()
{
    system("cls");
    cout << "=====================================\n";
    cout << "           Pet Donor Menu             \n";
    cout << "=====================================\n\n";
    double tempDonatedMoney;
    cout << "\n Enter amount of money to donate(in PKR) : ";
    cin >> tempDonatedMoney;

    donatedMoney = donatedMoney + tempDonatedMoney;
    addHistory("Donation", tempDonatedMoney, "General Support"); //record in history

    saveAllData();
    cout << "\nSuccessfully Donated " << tempDonatedMoney << " PKR, For a Good Cause <3\n ======================================\n     May Allah Give You More!!   \n======================================\n";
    cout << "Press any key to continue...";
    getch();
}


// Donor menu: view remaining shelter capacity
void donorViewCapacity()
{
    int tempRemainingCapacity;
    if (max_capacity - petCount > 0)
        tempRemainingCapacity = max_capacity - petCount;
    else
        tempRemainingCapacity = 0;

    system("cls");
    cout << "==============================================\n";
    cout << "          Remaining Shelter Capacity          \n";
    cout << "==============================================\n";
    cout << "---> Remaining Capacity : " << tempRemainingCapacity;
    cout << "\nPress any key to continue...";
    getch();
}


// Donor: full donor dashboard menu
void donorMenu()
{
    while (true)
    {
        system("cls");
        int donorOptions;
        cout << "\n====================================================" << endl;
        cout << "                PET DONOR DASHBOARD                 " << endl;
        cout << "====================================================" << endl;
        cout << "  [1] Donate a Pet" << endl;
        cout << "  [2] Donate Money" << endl;
        cout << "  [3] View Inventory Capacity" << endl;
        cout << "  [4] Return to Main Menu" << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "  [?] Select an action --> ";
        cin >> donorOptions;

        if      (donorOptions == 1) donorDonatePet();
        else if (donorOptions == 2) donorDonateMoney();
        else if (donorOptions == 3) donorViewCapacity();
        else if (donorOptions == 4) break;
        else
        {
            cout << "Wrong Choice !! Please enter again...";
            cout << "\n Press any key to continue...";
            getch();
        }
    }
}


// Customer: View all pets
void customerViewAllPets()
{
    system("cls");
    cout << "\n====================================================" << endl;
    cout << "                CURRENT PET INVENTORY               " << endl;
    cout << "====================================================" << endl;

    for (int i = 0; i < petCount; i++)
    {
        cout << "  [" << i + 1 << "] Name   : " << petNames[i] << endl;
        cout << "      Type   : " << petTypes[i] << endl;
        cout << "      Breed  : " << petBreeds[i] << endl;
        cout << "      Age    : " << petAges[i] << " years" << endl;
        cout << "      Health : " << petHealth[i] << "%" << endl;
        cout << "      Trait  : " << petTraits[i] << endl;
        cout << "----------------------------------------------------" << endl;
    }
    cout << "\n  Press any key to return to Dashboard...";
    getch();
}

// customer: search for a specific pet
void customerSearchPet()
{
    while (true)
    {
        system("cls");
        int searchmenuoption;
        cout << "=====================================\n";
        cout << "          Searching Pets             \n";
        cout << "=====================================\n\n";
        cout << "---> 1.Search\n";
        cout << "---> 2.Go back\n";
        cout << "  Enter you choice : ";
        cin >> searchmenuoption;

        if (searchmenuoption == 1)
        {
            system("cls");
            cout << "Enter the name you want to search: ";
            string searchName;
            cin.ignore();
            getline(cin, searchName);

            bool isFound = false;
            for (int i = 0; i < petCount; i++)
            {
                if (toLower(petNames[i]) == toLower(searchName))
                {
                    displayPetRecord(i);
                    isFound = true;
                    cout << "\nPress any key to go back...";
                    getch();
                    break;
                }
            }
            if (!isFound)
            {
                cout << "No record Found for : " << searchName << endl;
                cout << "Press any key to go back...";
                getch();
            }
        }
        else if (searchmenuoption == 2)
        {
            break;
        }
        else
        {
            cout << "Wrong selection!\n";
            cout << "Press any key to continue...";
            getch();
        }
    }
}

// customer menu: filter pets by type
void customerFilterByType()
{
    system("cls");
    cout << "Enter pet type to filter (Domestic / Field & Sport): ";
    string filterType;
    cin.ignore();
    getline(cin, filterType);

    bool anyFound = false;
    for (int i = 0; i < petCount; i++)
    {
        if (petTypes[i] == filterType)
        {
            cout << "\n";
            cout << "  [" << i + 1 << "] Name   : " << petNames[i] << endl;
            cout << "      Type   : " << petTypes[i] << endl;
            cout << "      Breed  : " << petBreeds[i] << endl;
            cout << "      Age    : " << petAges[i] << " years" << endl;
            cout << "      Health : " << petHealth[i] << "%" << endl;
            cout << "      Trait  : " << petTraits[i] << endl;
            cout << "----------------------------------------------------" << endl;
            anyFound = true;
        }
    }
    if (!anyFound)
        cout << "No pets found for type: " << filterType << endl;

    cout << "\nPress any key to continue...";
    getch();
}

// customer: adopt a pet
void customerAdoptPet()
{
    system("cls");
    cout << "=====================================\n";
    cout << "           Adopting Pets             \n";
    cout << "=====================================\n\n";
    cout << "Enter the pet name you want to adopt: ";
    string adoptName;
    cin.ignore();
    getline(cin, adoptName);

    bool isFound = false;
    int found_index = -1;

    for (int i = 0; i < petCount; i++)
    {
        if (toLower(petNames[i]) == toLower(adoptName))
        {
            cout << "    FIXED Fee for Adoption : " << fixFeeForAdoption << "\n";
            cout << "        Record of " << adoptName << endl;
            displayPetRecord(i);
            isFound = true;
            found_index = i;
            cout << "press any key to continue...";
            getch();
            system("cls");

            //confirm payment
            string confirmationMsg;
            cout << "Confirm Payment Of " << fixFeeForAdoption << " for Adopting " << petNames[found_index] << " ?(yes/no) : ";
            getline(cin, confirmationMsg);

            if (confirmationMsg == "yes")
            {
                totalAdoptedMoney = totalAdoptedMoney + fixFeeForAdoption;
                addHistory("Adoption", fixFeeForAdoption, "Adopted: " + adoptName); //record in history

                cout << "=====================================\n";
                cout << "           Adopting Pets             \n";
                cout << "=====================================\n\n";
                cout << "\n  Congratulations on Adopting " << adoptName << " It's " << petTraits[found_index] << " \n We are sure it will be Frank with you right after!!";

                removePetAt(found_index); //adopting means removing or deleting from shelter
                saveAllData();
                break;
            }
            else
            {
                break;
            }
        }
    }
    if (!isFound)
        cout << "No record Found for : " << adoptName << endl;

    cout << "\nPress any key to return to Main Menu...";
    getch();
    system("cls");
}

// customer: donate money from customer side
void customerDonateMoney()
{
    system("cls");
    cout << "=====================================\n";
    cout << "           Donation Menu             \n";
    cout << "=====================================\n\n";
    double tempDonatedMoney;
    cout << "\n Enter amount of money to donate(in PKR) : ";
    cin >> tempDonatedMoney;

    donatedMoney = donatedMoney + tempDonatedMoney;
    addHistory("Donation", tempDonatedMoney, "Customer General Support"); //record in history

    saveAllData();
    cout << "\nSuccessfully Donated " << tempDonatedMoney << " PKR, For a Good Cause <3\n ======================================\n     May Allah Give You More!!   \n======================================\n";
    cout << "Press any key to continue...";
    getch();
}

// customer: full customer dashboard menu
void customerMenu()
{
    while (true)
    {
        system("cls");
        string customerOptions;
        cout << "\n====================================================" << endl;
        cout << "              WELCOME TO PAW-SOME                   " << endl;
        cout << "           Find Your New Best Friend!               " << endl;
        cout << "====================================================" << endl;
        cout << "  [1] View All Pets" << endl;
        cout << "  [2] Search For a Specific Pet" << endl;
        cout << "  [3] Filter by type" << endl;
        cout << "  [4] Adopt a Pet" << endl;
        cout << "  [5] Donate Money for the Shelter" << endl;
        cout << "  [6] Return to Main Menu" << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "  [?] Select an action --> ";
        cin >> customerOptions;

        if      (customerOptions == "1") customerViewAllPets();
        else if (customerOptions == "2") customerSearchPet();
        else if (customerOptions == "3") customerFilterByType();
        else if (customerOptions == "4") customerAdoptPet();
        else if (customerOptions == "5") customerDonateMoney();
        else if (customerOptions == "6") break;
        else
        {
            cout << "Wrong choice!! Please enter again\n";
            cout << "Press any key to continue...";
            getch();
        }
    }
}

// main menu:Home screen
void showHomeScreen()
{
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
}

//main function meaning driver code starts here
int main()
{
    string mainoptions;

    loadAllData(); //loading saved data from files on launch of program

    while (true) //main homescreen loop
    {
        system("cls");
        showHomeScreen();
        cin >> mainoptions;

        if      (mainoptions == "1") adminMenu();    // goto admin section
        else if (mainoptions == "2") donorMenu();    // goto donor section
        else if (mainoptions == "3") customerMenu(); // go to customer section
        else if (mainoptions == "4") break;          // exit application
        else
        {
            cout << "Wrong Choice... Please enter again!!" << endl
                 << "Press Any Key to Continue...";
            getch();
        }
    }

    cout << "THANKS for using Paw-Some APPLICATION!!" << endl
         << endl
         << "Press any key to Exit...";
    getch();
    system("cls");
}
