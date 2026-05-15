#include <iostream>
using namespace std;

int main() {

    char d;

    cin >> d;

    switch(d) {

        case 'w':
            cout << "UP";
            break;

        case 's':
            cout << "DOWN";
            break;

        case 'a':
            cout << "LEFT";
            break;

        case 'd':
            cout << "RIGHT";
            break;
    }
}
