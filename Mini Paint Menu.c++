#include <iostream>
using namespace std;

int main() {

    int tool;

    cout << "1 Brush\n2 Eraser\n3 Fill\n";
    cin >> tool;

    switch(tool) {

        case 1:
            cout << "Brush Selected";
            break;

        case 2:
            cout << "Eraser Selected";
            break;

        case 3:
            cout << "Fill Selected";
            break;
    }
}
