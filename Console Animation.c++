#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    for(int i=0;i<20;i++) {

        system("cls");

        for(int j=0;j<i;j++)
            cout << " ";

        cout << "O";

        Sleep(100);
    }
}
