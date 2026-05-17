#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Expense {
    string category;
    double amount;
};

int main() {
    vector<Expense> expenses;
    int choice;
    do {
        cout << "\n=== Expense Tracker ===\n1. Add Expense\n2. Show All\n3. Total\n4. Exit\n";
        cin >> choice;
        if(choice == 1) {
            Expense e;
            cout << "Category: "; cin >> e.category;
            cout << "Amount: "; cin >> e.amount;
            expenses.push_back(e);
        } else if(choice == 2) {
            for(auto& ex : expenses) cout << ex.category << " : $" << ex.amount << endl;
        } else if(choice == 3) {
            double total = 0;
            for(auto& ex : expenses) total += ex.amount;
            cout << "Total spent: $" << total << endl;
        }
    } while(choice != 4);
    return 0;
}
