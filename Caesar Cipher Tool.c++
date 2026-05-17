#include <iostream>
#include <string>
using namespace std;

string encrypt(string text, int shift) {
    for(char &c : text) if(isalpha(c)) c = (c - 'a' + shift) % 26 + 'a';
    return text;
}

int main() {
    string text;
    int shift;
    cout << "=== Caesar Cipher ===\nText: ";
    cin.ignore(); getline(cin, text);
    cout << "Shift: "; cin >> shift;
    cout << "Encrypted: " << encrypt(text, shift) << endl;
    return 0;
}
