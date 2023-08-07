#include <iostream>
#include <string>
#include <cstdlib> // For system("CLS") and other functions


using namespace std;

// Function prototypes
// void loading();
void us_function();
// Program main Players 
void SystemAdmin_function();
void Lecturer_function();
void Student_function();

int main()
{
    string FullName = "";
    string Full;
    string Name;
    string ID = "22103878";

    // ... (variable declarations)

    cout << "\t\tONLINE LEARNING PLATFORM\n";
    cout << "\t__________________________________________________________" << endl;
    cout << "\t\t_____________lOGIN PAGE_____________" << endl << endl;
    cout << "Please Enter Details to Login: ";
    cin.get();
    // loading();

    us_function(); // User-type selection function

    return 0;
}
/* 
void loading()
{
    system("clear"); // Used to clear the screen 
    cout << "LOADING.....!";
    cin.get();
    system("clear"); // Use to clear the screen
}

*/


void us_function()
{
    int usertype;
    cout << "\nSelect an option; Register as:" << endl;
    cout << "\n 1.)  Admini\n";
    cout << "\n 2.)  Customer\n";
    cout << "\n 3.)  Exit\n";
    cout << "Option: ";
    cin >> usertype;

    // loading();
    
    switch (usertype)
    {
        case 1:
            SystemAdmin_function();
            break;
        case 2:
            Lecturer_function();
            break;
        case 3:
            Student_function();
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid option. Please select again." << endl;
            us_function();
    }
}

void SystemAdmin_function()
{
    // ... (Admin function code)
}

void Lecturer_function()
{
    // ... (Customer function code)
}

void Student_function()
{
    // ... (Menu function code)
}