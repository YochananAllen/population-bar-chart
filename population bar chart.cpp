// population bar chart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Name: Yochanan allen 

#include <iostream>

using namespace std;

int main() {
    int year, population;

    cout << "Population Growth of Prairieville " << endl;
    cout << "-----------------------------------" << endl;;
    cout << "Enter the population data for Prairieville at 20-year intervals."<< endl;
    cout << "Format: Year Population (e.g., 1900 5000)" << endl;
    cout << "Type -1 to finish input." << endl;

    
    while (true) {
        cout << "Enter year and population: " << endl;
        cin >> year;

        if (year == -1) {
            break;
        }

        cin >> population;

        cout << year << ": ";
        int numAsterisks = population / 1000;

        for (int i = 0; i < numAsterisks; ++i) {
            cout << "*";
        }
        cout << " (" << population << ")" << endl;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file