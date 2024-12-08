/*
File name:  Chapter5Exercise14and25StudentLineup.cpp
Programmer: Ozair Ghaissi
Date: 11/26/2024
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;
    string name, firstStudent, lastStudent;

    // Input: Number of students
    do {
        cout << "Enter the number of students in the class (1-25): ";
        cin >> numStudents;
        if (numStudents < 1 || numStudents > 25) {
            cout << "Error: Please enter a number between 1 and 25.\n";
        }
    } while (numStudents < 1 || numStudents > 25);

    // Read student names
    cout << "Enter the names of the students:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> name;

        // Determine first and last student
        if (i == 0 || name < firstStudent) {
            firstStudent = name;
        }
        if (i == 0 || name > lastStudent) {
            lastStudent = name;
        }
    }

    // Output results
    cout << "\nFront of the line: " << firstStudent << endl;
    cout << "End of the line: " << lastStudent << endl;

    return 0;
}
    