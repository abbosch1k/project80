#include <iostream>
using namespace std;

int main() {

    int car = 5;

    char move;

    while(true) {

        system("cls");

        for(int i=0;i<20;i++) {

            if(i == car)
                cout << "A";
            else
                cout << "-";
        }

        cout << "\n\nA = left | D = right\n";

        cin >> move;

        switch(move) {

            case 'a':
                car--;
                break;

            case 'd':
                car++;
                break;
        }

        if(car < 0)
            car = 0;

        if(car > 19)
            car = 19;
    }
}
