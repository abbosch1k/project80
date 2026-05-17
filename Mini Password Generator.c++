#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    string chars =
    "abc123XYZ";

    srand(time(0));

    for(int i=0;i<8;i++)
        cout << chars[rand()%chars.size()];
}
