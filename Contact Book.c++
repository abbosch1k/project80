#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Contact {
    string name, phone;
};

int main() {
    vector<Contact> contacts;
    int choice;
    do {
        cout << "\n=== Contact Book ===\n1. Add\n2. Show All\n3. Exit\n";
        cin >> choice; cin.ignore();
        if(choice == 1) {
            Contact c;
            cout << "Name: "; getline(cin, c.name);
            cout << "Phone: "; getline(cin, c.phone);
            contacts.push_back(c);
        } else if(choice == 2) {
            for(auto& con : contacts) cout << con.name << " - " << con.phone << endl;
        }
    } while(choice != 3);
    return 0;
}
