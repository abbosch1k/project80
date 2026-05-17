#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "programming";
    string guessed(word.length(), '_');
    int lives = 6;
    char letter;
    
    cout << "=== Hangman ===\n";
    while(lives > 0) {
        cout << "\nWord: " << guessed << "\nLives: " << lives << "\nGuess: ";
        cin >> letter;
        bool found = false;
        for(int i=0; i<word.length(); i++) {
            if(word[i] == letter) { guessed[i] = letter; found = true; }
        }
        if(!found) lives--;
        if(guessed == word) { cout << "You Win!\n"; break; }
    }
    if(lives == 0) cout << "Game Over! Word was: " << word << endl;
    return 0;
}
