#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int n=rand()%3;

    if(n==0)
        cout << "Cat";

    if(n==1)
        cout << "Dog";

    if(n==2)
        cout << "Tiger";
}
