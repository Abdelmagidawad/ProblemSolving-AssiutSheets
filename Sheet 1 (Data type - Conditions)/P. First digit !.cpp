#include <iostream>

using namespace std;

int main()
{
    int x,z;
    cin >> x;
    z = x /1000;
    if (z % 2 == 0) {
        cout << "EVEN" << endl;
    }
    else {
        cout << "ODD" << endl;
    }

    return 0;
}