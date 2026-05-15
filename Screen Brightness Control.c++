#include <iostream>
using namespace std;

int main() {

    int b=50;

    char c;

    cin >> c;

    if(c=='+')
        b+=10;

    if(c=='-')
        b-=10;

    cout << b;
}
