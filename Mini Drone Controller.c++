#include <iostream>
using namespace std;

int main() {

    char cmd;

    cin >> cmd;

    switch(cmd) {

        case 'w':
            cout << "Drone Up";
            break;

        case 's':
            cout << "Drone Down";
            break;

        case 'a':
            cout << "Drone Left";
            break;

        case 'd':
            cout << "Drone Right";
            break;
    }
}
