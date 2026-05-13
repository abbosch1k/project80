#include <iostream>
using namespace std;

int main() {

    int price;

    cin >> price;

    if(price>=100)
        cout << price-20;
    else
        cout << price;
}
