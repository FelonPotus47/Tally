// Tally.cpp : 
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int choice;             //Holed menu choice
    int person;  //Hold number of people
   
    int coffee = 0;
    int tea = 0;
    int coke = 0;
    int orange = 0;

    //Numeric formatting
    cout << fixed << showpoint << setprecision(2);
    for (int person = 1; person <= 6; person++)
    {
        cout << "Person " << person << " Please enter 1, 2, 3, or 4. To exit, enter -1" << endl;  
        cin >> choice;
        if (person == 6)
        {
            cout << "Number of people surveyed is " << person << endl;
            cout << "Beverages      Number of Votes\n";
            cout << "******************************\n";
            cout << "Coffee         " << coffee << endl; 
            cout << "Tea            " << tea << endl;
            cout << "Coke           " << coke << endl;
            cout << "Orange Juice   " << orange << endl; 
        }
        switch (choice)
        {
        case 1: 
            coffee++;
            break;
        case 2:
            tea++;
            break;
        case 3:
            coke++;
            break;
        case 4:
            orange++;
            break;
        }
        if (choice == -1)
        {
            cout << "Number of people surveyed is " << person << endl; 
            cout << "Beverages      Number of Votes\n";
            cout << "******************************\n";
            cout << "Coffee         " << coffee << endl; 
            cout << "Tea            " << tea << endl;
            cout << "Coke           " << coke << endl;
            cout << "Orange Juice   " << orange << endl;
        }
    }
   
    return 0;
}