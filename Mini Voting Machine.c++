#include <iostream>
using namespace std;

int main() {

    int vote1=0,vote2=0;

    int v;

    for(int i=0;i<3;i++) {

        cin >> v;

        if(v==1)
            vote1++;
        else
            vote2++;
    }

    cout << vote1 << endl;
    cout << vote2 << endl;
}
