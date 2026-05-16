#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> students;

    int choice;
    string name;

    do {

        cout << "\n=== ATTENDANCE SYSTEM ===\n";
        cout << "1. Add Student\n";
        cout << "2. Show Students\n";
        cout << "3. Count Students\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:

                cout << "Student name: ";
                cin >> name;

                students.push_back(name);

                break;

            case 2:

                for(string s : students)
                    cout << s << endl;

                break;

            case 3:

                cout << "Total: "
                     << students.size();

                break;
        }

    } while(choice != 0);
}
