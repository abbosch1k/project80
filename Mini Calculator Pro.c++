#include <iostream>
using namespace std;

int main() {

    float a,b;
    char op;

    cin >> a >> op >> b;

    if(op=='+')
        cout << a+b;

    if(op=='-')
        cout << a-b;

    if(op=='*')
        cout << a*b;

    if(op=='/')
        cout << a/b;
}
