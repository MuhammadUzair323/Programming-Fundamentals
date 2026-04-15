#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int Total_Students = 1000;
    int index_current = 8;
    string name_array[Total_Students] = {"Ali", "Ammar", "Sara", "Usman", "Zara", "Hassan", "Ayesha", "Ali"};
    int age_array[Total_Students] = {19, 20, 18, 21, 19, 20, 18, 22};
    float matric_marks_array[Total_Students] = {1050, 1100, 980, 1030, 1070, 950, 1090, 1010};
    float FSC_marks_array[Total_Students] = {982, 1020, 910, 970, 1050, 880, 1030, 940};
    float ecat_array[Total_Students] = {230, 290, 210, 260, 300, 195, 275, 240};
    string pref1_array[Total_Students] = {"CS", "CE", "EE", "CS", "CE", "ME", "CS", "EE"};
    string pref2_array[Total_Students] = {"CE", "CS", "CS", "EE", "CS", "CE", "EE", "CS"};
    string pref3_array[Total_Students] = {"EE", "EE", "CE", "CE", "EE", "CS", "CE", "ME"};
    float aggregate_array[Total_Students];

    while (true)
    {
        system("cls");
        cout << "----------------------------------------------------" << endl;
        cout << "-------University Admission Management System-------" << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "User Menu" << endl;
        cout << "1. Admin" << endl;
        cout << "2. User " << endl;
        cout << "3. Exit " << endl;
        string user_option;
        cout << "Choose option : ";
        cin >> user_option;
        cout << "You Chose Option : " << user_option << endl;

        if (user_option == "1")//admin menu
        {
            for (int i = 0; i < 3; i++)//loop for limiting credentials 
            {
                system("cls");
                cout << "Admin Menu : (LOGIN ATTEMPT : " << i + 1 << ")" << endl;
                cout << "Enter User name: ";
                string username;
                cin >> username;
                cout << "Enter Password: ";
                string password;
                cin >> password;

                if (username == "admin" && password == "123")//comparing if credentials are correct
                {
                    cout << "Successfully Logged in!" << endl;

                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all students" << endl;
                        cout << "2. Search Student   " << endl;
                        cout << "3. Update Student record" << endl;
                        cout << "4. Generate Merit list" << endl;
                        cout << "5. Delete Record" << endl;
                        cout << "6. Logout" << endl;
                        cout << "Choose the option: ";
                        string admin_option;
                        cin >> admin_option;

                        if (admin_option == "1")//show all students
                        {
                            cout << "Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index_current; i++)
                            {
                                if (name_array[i] != "")
                                {
                                    cout << name_array[i] << "\t" << age_array[i] << "\t" << matric_marks_array[i] << "\t" << FSC_marks_array[i] << "\t" << ecat_array[i] << "\t" << pref1_array[i] << "\t" << pref2_array[i] << "\t" << pref3_array[i] << endl;
                                }
                            }
                        }
                        else if (admin_option == "2")//search student
                        {
                            cout << "Enter the name you want to search: ";
                            string name;
                            cin >> name;
                            bool isFound = false;
                            int found_index = -1;
                            for (int i = 0; i < index_current; i++)
                            {
                                if (name_array[i] == name)
                                {   
                                    cout << "Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3" << endl;
                                    cout << name_array[i] << "\t" << age_array[i] << "\t" << matric_marks_array[i] << "\t" << FSC_marks_array[i] << "\t" << ecat_array[i] << "\t" << pref1_array[i] << "\t" << pref2_array[i] << "\t" << pref3_array[i] << endl;
                                    isFound = true;
                                    found_index = i;
                                    break;
                                    continue;
                                }
                            }
                            if (isFound == false)
                            {
                                cout << "No record Found " << name << endl;
                            }
                            // else{
                            //     cout << "Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3" << endl;
                            //     cout << name_array[found_index] << "\t" << age_array[found_index] << "\t" << matric_marks_array[found_index] << "\t" << FSC_marks_array[found_index] << "\t" << ecat_array[found_index] << "\t" << pref1_array[found_index] << "\t" << pref2_array[found_index] << "\t" << pref3_array[found_index] << endl;
                            // }
                        }
                        else if (admin_option == "3")
                        {
                            cout << "Enter the name you want to update record of: ";
                            string name;
                            cin >> name;
                            bool isFound = false;
                            int found_index = -1;
                            for (int i = 0; i < index_current; i++)
                            {
                                if (name_array[i] == name)
                                {
                                    isFound = true;
                                    found_index = i;
                                }
                            }
                            if (isFound)
                            {
                                cout << "---------OLD RECORD---------" << endl;
                                cout << "Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3" << endl;
                                cout << name_array[found_index] << "\t" << age_array[found_index] << "\t" << matric_marks_array[found_index] << "\t" << FSC_marks_array[found_index] << "\t" << ecat_array[found_index] << "\t" << pref1_array[found_index] << "\t" << pref2_array[found_index] << "\t" << pref3_array[found_index] << endl;
                                cout << "Enter New Record for Update: " << endl;
                                string newname;
                                cout << "Enter your name: ";
                                cin >> newname;
                                int age;
                                cout << "Enter age: ";
                                cin >> age;
                                float matric;
                                cout << "Enter Matric Marks: ";
                                cin >> matric;
                                float fsc;
                                cout << "Enter Fsc Marks: ";
                                cin >> fsc;
                                float ecat;
                                cout << "Enter ECAT Marks: ";
                                cin >> ecat;
                                string pref1;
                                cout << "Enter 1st Preference : ";
                                cin >> pref1;
                                string pref2;
                                cout << "Enter 2nd Preference : ";
                                cin >> pref2;
                                string pref3;
                                cout << "Enter 3rd Preference : ";
                                cin >> pref3;
                                name_array[found_index] = newname;
                                age_array[found_index] = age;
                                matric_marks_array[found_index] = matric;
                                FSC_marks_array[found_index] = fsc;
                                ecat_array[found_index] = ecat;
                                pref1_array[found_index] = pref1;
                                pref2_array[found_index] = pref2;
                                pref3_array[found_index] = pref3;
                                cout << "Your Data has been saved!" << endl;
                            }
                            else
                            {
                                cout << "Record not found!";
                            }
                        }
                        else if (admin_option == "4")
                        {
                            for (int i = 0; i < index_current; i++)
                            {
                                float aggreg = matric_marks_array[i] / 1100 * 100 * 0.30 + FSC_marks_array[i] / 1200 * 100 * 0.4 + ecat_array[i] / 400 * 100 * 0.3;
                                aggregate_array[i] = aggreg;
                            }

                            for (int i = 0; i < index_current; i++)
                            {
                                for (int j = i; j < index_current; j++)
                                {
                                    if (aggregate_array[i] < aggregate_array[j])
                                    {
                                        string temp_name = name_array[i];
                                        name_array[i] = name_array[j];
                                        name_array[j] = temp_name;

                                        int temp_age = age_array[i];
                                        age_array[i] = age_array[j];
                                        age_array[j] = temp_age;

                                        float temp_matric = matric_marks_array[i];
                                        matric_marks_array[i] = matric_marks_array[j];
                                        matric_marks_array[j] = temp_matric;

                                        float temp_fsc = FSC_marks_array[i];
                                        FSC_marks_array[i] = FSC_marks_array[j];
                                        FSC_marks_array[j] = temp_fsc;

                                        float temp_ecat = ecat_array[i];
                                        ecat_array[i] = ecat_array[j];
                                        ecat_array[j] = temp_ecat;

                                        string temp_p1 = pref1_array[i];
                                        pref1_array[i] = pref1_array[j];
                                        pref1_array[j] = temp_p1;

                                        string temp_p2 = pref2_array[i];
                                        pref2_array[i] = pref2_array[j];
                                        pref2_array[j] = temp_p2;

                                        string temp_p3 = pref3_array[i];
                                        pref3_array[i] = pref3_array[j];
                                        pref3_array[j] = temp_p3;

                                        float temp_aggreg = aggregate_array[i];
                                        aggregate_array[i] = aggregate_array[j];
                                        aggregate_array[j] = temp_aggreg;
                                    }
                                }
                            }

                            cout << "Name\tAge\tAggregate" << endl;
                            for (int i = 0; i < index_current; i++)
                            {
                                if (name_array[i] != "")
                                {
                                    cout << name_array[i] << "\t" << age_array[i] << "\t" << aggregate_array[i] << " %" << endl;
                                }
                            }

                            // Code for Admission
                            cout << "\n--- Admission Results ---" << endl;
                            cout << "Name\tAggregate\t\tAdmitted To" << endl;

                            int cs_seats = 2, ce_seats = 2, ee_seats = 2, me_seats = 2;

                            for (int i = 0; i < index_current; i++)
                            {
                                if (name_array[i] != "")
                                {
                                    string prefs[3] = {pref1_array[i], pref2_array[i], pref3_array[i]};
                                    bool admitted = false;

                                    for (int p = 0; p < 3; p++)
                                    {
                                        if (admitted == false)
                                        {
                                            if (prefs[p] == "CS" && cs_seats > 0)
                                            {
                                                cout << name_array[i] << "\t" << aggregate_array[i] << " %\t\t" << "CS" << endl;
                                                cs_seats--;
                                                admitted = true;
                                            }
                                            else if (prefs[p] == "CE" && ce_seats > 0)
                                            {
                                                cout << name_array[i] << "\t" << aggregate_array[i] << "  %\t\t" << "CE" << endl;
                                                ce_seats--;
                                                admitted = true;
                                            }
                                            else if (prefs[p] == "EE" && ee_seats > 0)
                                            {
                                                cout << name_array[i] << "\t" << aggregate_array[i] << " %\t\t" << "EE" << endl;
                                                ee_seats--;
                                                admitted = true;
                                            }
                                            else if (prefs[p] == "ME" && me_seats > 0)
                                            {
                                                cout << name_array[i] << "\t" << aggregate_array[i] << " %\t\t" << "ME" << endl;
                                                me_seats--;
                                                admitted = true;
                                            }
                                        }
                                    }

                                    if (admitted == false)
                                    {
                                        cout << name_array[i] << "\t" << aggregate_array[i] << " %\t\tNot Admitted (No seats available)" << endl;
                                    }
                                }
                            }

                            cout << "\n--- Remaining Seats ---" << endl;
                            cout << "CS: " << cs_seats << " | CE: " << ce_seats << " | EE: " << ee_seats << " | ME: " << me_seats << endl;
                        }
                        else if (admin_option == "5")
                        {
                            cout << "Enter the name you want to Delete record of: ";
                            string name;
                            cin >> name;
                            bool isFound = false;
                            int found_index = -1;
                            for (int i = 0; i < index_current; i++)
                            {
                                if (name_array[i] == name)
                                {
                                    isFound = true;
                                    found_index = i;
                                }
                            }
                            if (isFound)
                            {
                                name_array[found_index] = "";
                                age_array[found_index] = 0;
                                matric_marks_array[found_index] = 0;
                                FSC_marks_array[found_index] = 0;
                                ecat_array[found_index] = 0;
                                pref1_array[found_index] = "";
                                pref2_array[found_index] = "";
                                pref3_array[found_index] = "";
                                cout << "Record of " << name << " is deleted!" << endl;
                            }
                            else
                            {
                                cout << "Record Not Found! " << endl;
                            }
                        }
                        else if (admin_option == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Invalid Option!" << endl;
                        }
                        cout << "Press any key to continue...";
                        getch();
                    }
                    cout << "Press any key to continue...";
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or Password is invalid!" << endl;
                }
                cout << "Press any key to continue...";
                getch();
            }
        }
        else if (user_option == "2")//student menu
        {
            system("cls");
            cout << "Welcome to UMS! This is Student Menu" << endl;
            string name;
            cout << "Enter your name: ";
            cin >> name;
            int age;
            cout << "Enter age: ";
            cin >> age;
            float matric;
            cout << "Enter Matric Marks: ";
            cin >> matric;
            float fsc;
            cout << "Enter Fsc Marks: ";
            cin >> fsc;
            float ecat;
            cout << "Enter ECAT Marks: ";
            cin >> ecat;
            cout << endl;
            cout << "Enter your Preferences as CS, CE, EE" << endl;
            string pref1;
            cout << "Enter 1st Preference : ";
            cin >> pref1;
            string pref2;
            cout << "Enter 2nd Preference : ";
            cin >> pref2;
            string pref3;
            cout << "Enter 3rd Preference : ";
            cin >> pref3;
            name_array[index_current] = name;
            age_array[index_current] = age;
            matric_marks_array[index_current] = matric;
            FSC_marks_array[index_current] = fsc;
            ecat_array[index_current] = ecat;
            pref1_array[index_current] = pref1;
            pref2_array[index_current] = pref2;
            pref3_array[index_current] = pref3;
            index_current++;
            cout << "Your Data has been saved!" << endl;
            cout << "Press any key to continue...";
            getch();
        }
        else if (user_option == "3")//exit main menu
        {
            break;
        }
        else
        {
            cout << "You entered wrong choice!" << endl;
        }
    }
    cout << endl
         << "Thanks for Using this UMS Software!" << endl;
}