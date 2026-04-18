#include <iostream>
#include <conio.h>
using namespace std;
int main() // main
{
    // DATA-Structures
    string mainoptions;
    int max_capacity = 1000;

    string petNames[max_capacity] = {"Whiskers", "Tracker", "Duke", "Luna"};
    string petTypes[max_capacity] = {"Domestic", "Field & Sport", "Field & Sport", "Domestic"};
    string petBreeds[max_capacity] = {"Persian", "Pointer", "Labrador", "Siamese"};
    int petAges[max_capacity] = {2, 3, 2, 1};
    float petHealth[max_capacity] = {92.5, 98.0, 99.0, 88.0};
    string petTraits[max_capacity] = {"Calm", "Fast Tracker", "Great Swimmer", "Playful"};
    double donatedMoney = 100;

    int petCount = 4;

    while (true) // While loop for main homescreen
    {
        // MAIN MENU (homescreen)
        system("cls");
        cout << "================================================" << endl;
        cout << "            PAW-SOME PETS & CO.                 " << endl;
        cout << "      Pet Management & Adoption Network         " << endl;
        cout << "================================================" << endl;
        cout << endl;
        cout << "Who are you? " << endl;
        cout << "1. Admin(Owner & Manager)" << endl;
        cout << "2. Pet Donor" << endl;
        cout << "3. Customer" << endl;
        cout << "4. Logout" << endl;
        cout << "Enter your choice: ";
        cin >> mainoptions;

        // MENU-Option decider using conditions
        if (mainoptions == "1") // filtering the admin menu using condition
        {
            bool loginSuccess = false;

            for (int i = 0; i < 3; i++) // loop for limiting credentials
            {
                system("cls");
                cout << "Admin Menu : (LOGIN ATTEMPT : " << i + 1 << ")" << endl;
                cout << "Enter User name: ";
                string username;
                cin >> username;
                cout << "Enter Password: ";
                string password;
                cin >> password;

                if (username == "admin" && password == "123") // comparing if credentials are correct
                {
                    cout << "Successfully Logged in!" << endl;
                    system("cls");
                    loginSuccess = true;
                    break;
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

            if (loginSuccess)
            {
                while (true)
                {
                    system("cls");
                    // admincode
                    string adminoptions;
                    cout << "==============================================" << endl; // admin menu header
                    cout << "                ADMIN Menu                    " << endl;
                    cout << "==============================================" << endl;
                    cout << "---> 1. Display All Pets" << endl;
                    cout << "---> 2. Search Pet by Name" << endl;
                    cout << "---> 3. Sorting Pets" << endl;
                    cout << "---> 4. Update Pet Information" << endl;
                    cout << "---> 5. Delete a Pet Record" << endl;
                    cout << "---> 6. Inventory statistics" << endl;
                    cout << "---> 7. View Donated Money for the Shelter"<<endl;
                    cout << "---> 8. Return to Main Menu" << endl;
                    cout << "        Enter selection: ";
                    cin >> adminoptions;

                    if (adminoptions == "1") // displaying all pet data in vertical box order
                    {
                        system("cls");
                        cout << "================================================" << endl;
                        cout << "           CURRENT PET INVENTORY                " << endl;
                        cout << "================================================" << endl;

                        cout << "\nTotal Pets: " << petCount << endl;
                        for (int i = 0; i < petCount; i++)
                        {

                            cout << "[ ID: " << i + 1 << " ]--------------------------------" << endl;
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
                    else if (adminoptions == "2") // search by name
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
                                int found_index = -1;
                                for (int i = 0; i < petCount; i++)
                                {
                                    string currentPet = petNames[i];

                                    // MANUAL ASCII solution to solve the problem of searching with case sensitivness
                                    //  Converting BOTH strings to lowercase manually for comparison
                                    string searchLower = searchName;
                                    string storedLower = currentPet;

                                    for (int j = 0; j < searchLower.length(); j++)
                                    {
                                        if (searchLower[j] >= 65 && searchLower[j] <= 90) // If it's Capital (A-Z)
                                            searchLower[j] = searchLower[j] + 32;         // Making it lowercase
                                    }
                                    for (int j = 0; j < storedLower.length(); j++)
                                    {
                                        if (storedLower[j] >= 65 && storedLower[j] <= 90) // If it's Capital (A-Z)
                                            storedLower[j] = storedLower[j] + 32;         // Making it lowercase
                                    }
                                    if (storedLower == searchLower)
                                    {
                                        cout << "[ ID: " << i + 1 << " ]--------------------------------" << endl;
                                        cout << "  Name   : " << petNames[i] << endl;
                                        cout << "  Type   : " << petTypes[i] << " (" << petBreeds[i] << ")" << endl;
                                        cout << "  Status : " << petAges[i] << " yrs | Health: " << petHealth[i] << "%" << endl;
                                        cout << "  Traits : " << petTraits[i] << endl;
                                        isFound = true;
                                        found_index = i;
                                        cout << "\nPress any key to go back...";
                                        getch();
                                        break;
                                    }
                                }
                                if (isFound == false)
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
                    else if (adminoptions == "3") // sort pets by health or age
                    {
                        // bubble sorting out the pets
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
                            { // bubble sorting pets by health
                                for (int i = 0; i < petCount - 1; i++)
                                {
                                    for (int j = 0; j < petCount - i - 1; j++)
                                    {
                                        if (petHealth[j] < petHealth[j + 1])
                                        {
                                            // 1. Swap Health
                                            float tempHealth = petHealth[j];
                                            petHealth[j] = petHealth[j + 1];
                                            petHealth[j + 1] = tempHealth;

                                            // 2. Swap Names || swapping all aswell to maintain the data in parrallel arrays
                                            string tempName = petNames[j];
                                            petNames[j] = petNames[j + 1];
                                            petNames[j + 1] = tempName;

                                            // 3. Swap Types
                                            string tempType = petTypes[j];
                                            petTypes[j] = petTypes[j + 1];
                                            petTypes[j + 1] = tempType;

                                            // 4. Swap Breeds
                                            string tempBreed = petBreeds[j];
                                            petBreeds[j] = petBreeds[j + 1];
                                            petBreeds[j + 1] = tempBreed;

                                            // 5. Swap Ages
                                            int tempAge = petAges[j];
                                            petAges[j] = petAges[j + 1];
                                            petAges[j + 1] = tempAge;

                                            // 6. Swap Traits
                                            string tempTrait = petTraits[j];
                                            petTraits[j] = petTraits[j + 1];
                                            petTraits[j + 1] = tempTrait;
                                        }
                                    }
                                }
                                cout << "Successfully sorted All by health! Use Display All to check..." << endl;
                                cout << "\nPress any key to continue...";
                                getch();
                            }
                            else if (sortOptions == 2) // bubble sorting pets by age
                            {
                                int sortageOptions;
                                system("cls");
                                // menu for age sorting youngest to oldest or oldest to youngest
                                cout << "---> 1. Oldest to Youngest\n";
                                cout << "---> 2. Youngest to Oldest\n";
                                cout << "       Enter your selection : ";
                                cin >> sortageOptions;
                                if (sortageOptions == 1)
                                {
                                    for (int i = 0; i < petCount - 1; i++)
                                    {
                                        for (int j = 0; j < petCount - i - 1; j++)
                                        {
                                            if (petAges[j] < petAges[j + 1])
                                            {
                                                // 5. Swap Ages
                                                int tempAge = petAges[j];
                                                petAges[j] = petAges[j + 1];
                                                petAges[j + 1] = tempAge;

                                                // 2. Swap Names || swapping all aswell to maintain the data in parrallel arrays
                                                string tempName = petNames[j];
                                                petNames[j] = petNames[j + 1];
                                                petNames[j + 1] = tempName;

                                                // 3. Swap Types
                                                string tempType = petTypes[j];
                                                petTypes[j] = petTypes[j + 1];
                                                petTypes[j + 1] = tempType;

                                                // 4. Swap Breeds
                                                string tempBreed = petBreeds[j];
                                                petBreeds[j] = petBreeds[j + 1];
                                                petBreeds[j + 1] = tempBreed;

                                                // 1. Swap Health
                                                float tempHealth = petHealth[j];
                                                petHealth[j] = petHealth[j + 1];
                                                petHealth[j + 1] = tempHealth;

                                                // 6. Swap Traits
                                                string tempTrait = petTraits[j];
                                                petTraits[j] = petTraits[j + 1];
                                                petTraits[j + 1] = tempTrait;
                                            }
                                        }
                                    }
                                    cout << "Successfully sorted All by age(Oldest to Youngest) !! \n Use Display All to check..." << endl;
                                    cout << "\nPress any key to continue...";
                                    getch();
                                }
                                else if (sortageOptions == 2)
                                {
                                    for (int i = 0; i < petCount - 1; i++)
                                    {
                                        for (int j = 0; j < petCount - i - 1; j++)
                                        {
                                            if (petAges[j] > petAges[j + 1])
                                            {
                                                // 5. Swap Ages
                                                int tempAge = petAges[j];
                                                petAges[j] = petAges[j + 1];
                                                petAges[j + 1] = tempAge;

                                                // 2. Swap Names || swapping all aswell to maintain the data in parrallel arrays
                                                string tempName = petNames[j];
                                                petNames[j] = petNames[j + 1];
                                                petNames[j + 1] = tempName;

                                                // 3. Swap Types
                                                string tempType = petTypes[j];
                                                petTypes[j] = petTypes[j + 1];
                                                petTypes[j + 1] = tempType;

                                                // 4. Swap Breeds
                                                string tempBreed = petBreeds[j];
                                                petBreeds[j] = petBreeds[j + 1];
                                                petBreeds[j + 1] = tempBreed;

                                                // 1. Swap Health
                                                float tempHealth = petHealth[j];
                                                petHealth[j] = petHealth[j + 1];
                                                petHealth[j + 1] = tempHealth;

                                                // 6. Swap Traits
                                                string tempTrait = petTraits[j];
                                                petTraits[j] = petTraits[j + 1];
                                                petTraits[j + 1] = tempTrait;
                                            }
                                        }
                                    }
                                    cout << "Successfully sorted All by age(Youngest to oldest) !! \n Use Display All to check..." << endl;
                                    cout << "\nPress any key to continue...";
                                    getch();
                                }
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
                    else if (adminoptions == "4") // update pet information
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
                        int found_index = -1;
                        for (int i = 0; i < petCount; i++)
                        {
                            string currentPet = petNames[i];

                            // MANUAL ASCII solution to solve the problem of searching name for updating with case sensitivness
                            //  Converting BOTH strings to lowercase manually for comparison
                            string searchLower = updateName;
                            string storedLower = currentPet;

                            for (int j = 0; j < searchLower.length(); j++)
                            {
                                if (searchLower[j] >= 65 && searchLower[j] <= 90) // If it's Capital (A-Z)
                                    searchLower[j] = searchLower[j] + 32;         // Making it lowercase
                            }
                            for (int j = 0; j < storedLower.length(); j++)
                            {
                                if (storedLower[j] >= 65 && storedLower[j] <= 90) // If it's Capital (A-Z)
                                    storedLower[j] = storedLower[j] + 32;         // Making it lowercase
                            }
                            if (storedLower == searchLower)
                            {
                                cout << "OLD Record of " << updateName; // displaying old record first to confirm to the user
                                cout << "[ ID: " << i + 1 << " ]\n--------------------------------" << endl;
                                cout << "  Name   : " << petNames[i] << endl;
                                cout << "  Type   : " << petTypes[i] << " (" << petBreeds[i] << ")" << endl;
                                cout << "  Status : " << petAges[i] << " yrs | Health: " << petHealth[i] << "%" << endl;
                                cout << "  Traits : " << petTraits[i] << endl;
                                isFound = true;
                                found_index = i;
                                cout << "\n Press any key to continue...";
                                getch();
                                system("cls");
                                cout << "=====================================\n";
                                cout << "           Updating Pets             \n";
                                cout << "=====================================\n\n";
                                cout << "Enter the new name for updating : "; // getting new data from the user
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
                                petNames[i] = tempPetname; // storing new data from temp vars to original arrays
                                petTypes[i] = tempPettype;
                                petBreeds[i] = tempPetbreeds;
                                petAges[i] = tempPetage;
                                petHealth[i] = tempPethealth;
                                petTraits[i] = tempPettrait;
                                cout << "Successfully updated the Data...  Check 'search by name' or 'display all' to confirm";

                                break;
                            }
                        }
                        if (isFound == false)
                        {
                            cout << "No record Found for : " << updateName << endl;
                        }
                        cout << "\nPress any key to return to Admin Menu...";
                        getch();
                        system("cls");
                    }
                    else if (adminoptions == "5") // delete pet info
                    {
                        system("cls");
                        // code for deleting pet info
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
                            string currentPet = petNames[i];

                            // MANUAL ASCII solution to solve the problem of searching with case sensitivness
                            //  Converting BOTH strings to lowercase manually for comparison
                            string searchLower = deleteName;
                            string storedLower = currentPet;

                            for (int j = 0; j < searchLower.length(); j++)
                            {
                                if (searchLower[j] >= 65 && searchLower[j] <= 90) // If it's Capital (A-Z)
                                    searchLower[j] = searchLower[j] + 32;         // Making it lowercase
                            }
                            for (int j = 0; j < storedLower.length(); j++)
                            {
                                if (storedLower[j] >= 65 && storedLower[j] <= 90) // If it's Capital (A-Z)
                                    storedLower[j] = storedLower[j] + 32;         // Making it lowercase
                            }
                            if (storedLower == searchLower)
                            {
                                cout << "        Record of " << deleteName << endl;
                                cout << "[ ID: " << i + 1 << " ]\n--------------------------------" << endl;
                                cout << "  Name   : " << petNames[i] << endl;
                                cout << "  Type   : " << petTypes[i] << " (" << petBreeds[i] << ")" << endl;
                                cout << "  Status : " << petAges[i] << " yrs | Health: " << petHealth[i] << "%" << endl;
                                cout << "  Traits : " << petTraits[i] << endl;
                                isFound = true;
                                found_index = i;
                                cout << "press any key to continue...";
                                getch();
                                system("cls");
                                for (int i = found_index; i < petCount - 1; i++)
                                {
                                    petNames[i] = petNames[i + 1];
                                    petTypes[i] = petTypes[i + 1];
                                    petBreeds[i] = petBreeds[i + 1];
                                    petAges[i] = petAges[i + 1];
                                    petHealth[i] = petHealth[i + 1];
                                    petTraits[i] = petTraits[i + 1];
                                }
                                petCount--;
                                cout << "=====================================\n";
                                cout << "           Removing Pets             \n";
                                cout << "=====================================\n\n";
                                cout << "Succesfully Deleted Record of " << deleteName;
                                break;
                            }
                        }
                        if (isFound == false)
                        {
                            cout << "No record Found for : " << deleteName << endl;
                        }
                        cout << "\nPress any key to return to Admin Menu...";
                        getch();
                        system("cls");
                    }
                    else if (adminoptions == "6") // inventory statistics
                    {
                        system("cls");
                        // code for inventory statistics
                        while (true)
                        {
                            int domesticCount = 0;
                            int fieldsportCount = 0;
                            int oldidx = 0;
                            int youngidx = 0;
                            if (petCount == 0)
                            {
                                cout << "Inventory is empty!";
                                break;
                            }
                            else
                            {
                                for (int i = 0; i < petCount; i++) // finding domestic & Field and sport pets count
                                {
                                    if (petTypes[i] == "Domestic" || petTypes[i] == "domestic")
                                    {
                                        domesticCount++;
                                    }
                                    if (petTypes[i] == "field & sport" || petTypes[i] == "field and sport")

                                    {
                                        fieldsportCount++;
                                    }
                                }
                                for (int i = 0; i < petCount; i++) // finding oldest and youngest pets
                                {
                                    if (petAges[i] > petAges[oldidx])
                                    {
                                        oldidx = i;
                                    }
                                    if (petAges[i] < petAges[youngidx])
                                    {
                                        youngidx = i;
                                    }
                                }

                                // displaying the inventory statistics
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
                    else if (adminoptions=="7")//showing donation money
                    {
                        system("cls");
                        //code for showing donated money
                        cout<<"=============================================\n";
                        cout<<"               Donation Money                \n";
                        cout<<"=============================================\n";
                        cout<<"   Donation Bank Balance : "<<donatedMoney<<" PKR";
                        cout<<"\nPress any key to go back...";
                        getch();

                    }
                    else if (adminoptions == "8") // break to main menu
                    {
                        break;
                    }
                    else
                    {
                        cout << "Wrong selection! Enter again..." << endl;
                        cout << "Press any key to continue...";
                        getch();
                    }
                }
            }
            else if (loginSuccess != true)
            {

                system("cls");
                cout << "Maximum login attempts reached. Access Denied!" << endl;
                cout << "Press any key to return to the main menu...";
                getch();
            }
        }
        else if (mainoptions == "2") // filtering the donor menu using condition
        {
            // donorcode
            while (true)
            {
                system("cls");
                int donorOptions;
                cout << "=====================================\n";
                cout << "           Pet Donor Menu             \n";
                cout << "=====================================\n\n";
                cout << "---> 1. Donate a Pet \n";
                cout << "---> 2. Donate Money\n";
                cout << "---> 3. View Remaining Capacity in inventory \n";
                cout << "---> 4. Exit to Main Menu\n";
                cout << "    Enter your choice : ";
                cin >> donorOptions;
                if (donorOptions == 1)
                {
                    if (petCount < max_capacity)
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
                        petNames[petCount] = donateName;
                        petTypes[petCount] = donateType;
                        petBreeds[petCount] = donateBreed;
                        petAges[petCount] = donateAge;
                        petHealth[petCount] = donateHealth;
                        petTraits[petCount] = donateTrait;
                        petCount++;
                        cout << "\n\n Successfully Donted Pet For a Good Cause <3";
                    }
                    else
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
                else if (donorOptions == 2)
                {
                    system("cls");
                    string donateMoneyselection;
                    cout << "=====================================\n";
                    cout << "           Pet Donor Menu             \n";
                    cout << "=====================================\n\n";
                    double tempDonatedMoney;
                    cout << "\n Enter amount of money to donate(in PKR) : ";
                    cin >> tempDonatedMoney;
                    donatedMoney = donatedMoney + tempDonatedMoney;
                    cout<<"\nSuccessfully Donated "<<tempDonatedMoney<<" PKR, For a Good Cause <3\n ======================================\n     May Allah Give You More!!   \n======================================\n";
                    cout<<"Press any key to continue...";
                    getch();
                }
                else if (donorOptions == 3)
                {
                    int tempRemainingCapacity;
                    if (max_capacity - petCount > 0)
                    {
                        tempRemainingCapacity = max_capacity - petCount;
                    }
                    else
                    {
                        tempRemainingCapacity = 0;
                    }
                    cout << "==============================================\n";
                    cout << "          Remaining Shelter Capacity          \n";
                    cout << "==============================================\n";
                    cout << "---> Remaining Capacity : " << tempRemainingCapacity;
                    cout << "\nPress any key to continue...";
                    getch();
                }
                else if (donorOptions == 4)
                {
                    break;
                }
                else
                {
                    cout << "Wrong Choice !! Please enter again...";
                    cout << "\n Press any key to continue...";
                    getch();
                }
            }
        }
        else if (mainoptions == "3") // filtering the customer menu using condition
        {
            // customercode
        }
        // loop breaker i.e the exit option
        else if (mainoptions == "4") // filtering the exit option using condition and logging out
        {
            break;
        }
        else // else condition if choice entered was wrong
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
    // screen clearing after exiting the loop
    system("cls");
}