#include <iostream>
using namespace std;

int main() {

    string cmd;

    cout << "=== HACKER TERMINAL ===\n";

    while(true) {

        cout << "root@system: ";
        cin >> cmd;

        if(cmd == "scan")
            cout << "Scanning network...\n";

        else if(cmd == "hack")
            cout << "Access granted!\n";

        else if(cmd == "exit")
            break;

        else
            cout << "Unknown command\n";
    }
}
