#include <iostream>
using namespace std;

int main() {

    int happiness = 50;

    int choice;

    do {

        cout << "\n=== PET SIMULATOR ===\n";
        cout << "1. Feed Pet\n";
        cout << "2. Play\n";
        cout << "3. Show Happiness\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:
                happiness += 10;
                cout << "Pet fed!\n";
                break;

            case 2:
                happiness += 20;
                cout << "Playing!\n";
                break;

            case 3:
                cout << "Happiness: "
                     << happiness
                     << endl;
                break;
        }

    } while(choice != 0);
}
