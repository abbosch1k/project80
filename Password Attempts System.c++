#include <iostream>
using namespace std;

int main() {

    string pass;

    for(int i=0;i<3;i++) {

        cin >> pass;

        if(pass=="admin") {

            cout << "Access";
            return 0;
        }
    }

    cout << "Blocked";
}
