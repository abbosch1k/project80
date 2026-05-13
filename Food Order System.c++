#include <iostream>
using namespace std;

int main() {

    int food;

    cout << "1 Pizza\n2 Burger\n";
    cin >> food;

    if(food==1)
        cout << "Pizza Ordered";
    else
        cout << "Burger Ordered";
}
