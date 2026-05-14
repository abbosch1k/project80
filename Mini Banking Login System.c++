#include <iostream>
using namespace std;

int main() {

    string login;
    int pin;

    cout << "=== BANK LOGIN ===\n";

    cout << "Enter login: ";
    cin >> login;

    cout << "Enter PIN: ";
    cin >> pin;

    if(login == "admin" && pin == 2026) {

        cout << "Login Success!\n";
        cout << "Welcome to your bank account.";
    }
    else {

        cout << "Wrong login or PIN!";
    }

    return 0;
}
