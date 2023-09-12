#include <iostream>

using namespace std;

int main()
{
    char x,y,z;
    cin >> x;
    if (x >= 65 && x < 97) {
        y = x + 32;
        cout << y << endl;
    }
    else if(x>=97) {
        z = x - 32;
        cout << z << endl;

    }

    return 0;
}