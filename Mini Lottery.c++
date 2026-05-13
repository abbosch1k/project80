#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int n=rand()%10;

    int guess;

    cin >> guess;

    if(guess==n)
        cout << "Jackpot!";
    else
        cout << "Number was "
             << n;
}
