#include <iostream>
using namespace std;

int main() {

    int temp;

    cin >> temp;

    if(temp > 30)
        cout << "Very Hot";
    else if(temp > 15)
        cout << "Warm";
    else
        cout << "Cold";
}
