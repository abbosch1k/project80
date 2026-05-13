#include <iostream>
using namespace std;

int main() {

    int current, alarm;

    cin >> current >> alarm;

    if(current == alarm)
        cout << "ALARM!";
    else
        cout << "Waiting...";
}
