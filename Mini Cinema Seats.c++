#include <iostream>
using namespace std;

int main() {

    int seats[5]={0};

    int seat;

    cin >> seat;

    seats[seat]=1;

    for(int i=0;i<5;i++)
        cout << seats[i] << " ";
}
