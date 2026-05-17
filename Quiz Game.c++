#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0;
    string answer;
    cout << "=== C++ Quiz Game ===\n\n";
    
    cout << "1. Who created C++? "; cin >> answer;
    if(answer == "Bjarne" || answer == "Stroustrup") { score++; cout << "Correct!\n"; }
    
    cout << "2. What does OOP stand for? "; cin.ignore(); getline(cin, answer);
    if(answer == "Object Oriented Programming") { score++; cout << "Correct!\n"; }
    
    cout << "\nYour score: " << score << "/2\n";
    return 0;
}
