#include <iostream>
using namespace std;

int main() {

    int player = 5;

    char move;

    while(true) {

        system("cls");

        for(int i=0;i<20;i++) {

            if(i == player)
                cout << "A";
            else
                cout << "-";
        }

        cout << "\nA/D move | F shoot\n";

        cin >> move;

        switch(move) {

            case 'a':
                player--;
                break;

            case 'd':
                player++;
                break;

            case 'f':
                cout << "PEW PEW!\n";
                break;
        }

        if(player < 0)
            player = 0;

        if(player > 19)
            player = 19;
    }
}
