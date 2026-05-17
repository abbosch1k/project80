#include <iostream>
#include <vector>
#include <conio.h>
#include <windows.h>
using namespace std;

bool gameOver;
const int width = 20, height = 20;
int x, y, fruitX, fruitY, score;
vector<int> tailX, tailY;
int nTail;
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2; y = height / 2;
    fruitX = rand() % width; fruitY = rand() % height;
    score = 0;
}

void Draw() {
    system("cls");
    for(int i=0; i<width+2; i++) cout << "#"; cout << endl;
    for(int i=0; i<height; i++) {
        for(int j=0; j<width; j++) {
            if(j==0) cout << "#";
            if(i==y && j==x) cout << "O";
            else if(i==fruitY && j==fruitX) cout << "F";
            else {
                bool printed = false;
                for(int k=0; k<nTail; k++) {
                    if(tailX[k]==j && tailY[k]==i) { cout << "o"; printed = true; break; }
                }
                if(!printed) cout << " ";
            }
            if(j==width-1) cout << "#";
        }
        cout << endl;
    }
    for(int i=0; i<width+2; i++) cout << "#"; 
    cout << "\nScore: " << score << endl;
}

void Input() {
    if(_kbhit()) {
        switch(_getch()) {
            case 'a': dir = LEFT; break;
            case 'd': dir = RIGHT; break;
            case 'w': dir = UP; break;
            case 's': dir = DOWN; break;
            case 'x': gameOver = true; break;
        }
    }
}

void Logic() {
    int prevX = x, prevY = y;
    int prev2X, prev2Y;
    tailX.insert(tailX.begin(), prevX);
    tailY.insert(tailY.begin(), prevY);
    if(tailX.size() > nTail+1) { tailX.pop_back(); tailY.pop_back(); }
    
    switch(dir) {
        case LEFT: x--; break;
        case RIGHT: x++; break;
        case UP: y--; break;
        case DOWN: y++; break;
    }
    if(x >= width || x < 0 || y >= height || y < 0) gameOver = true;
    for(int i=0; i<nTail; i++) if(tailX[i]==x && tailY[i]==y) gameOver = true;
    if(x==fruitX && y==fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

int main() {
    Setup();
    while(!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100);
    }
    cout << "Game Over! Final Score: " << score << endl;
    return 0;
}
