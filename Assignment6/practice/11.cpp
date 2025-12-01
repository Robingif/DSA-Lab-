#include <iostream>
using namespace std;

int main() {
    int marks[5];

    cout << "Enter marks of 5 students:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> marks[i];

        try {
            if (marks[i] < 0 || marks[i] > 100) {
                throw "Invalid mark! Must be between 0 and 100.";
            }
        }
        catch ( char msg) {
            cout << "Exception: " << msg << endl;
            marks[i] = 0;  // optional: reset to safe value
        }
    }

    cout << "\nMarks entered:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }

    return 0;
}
