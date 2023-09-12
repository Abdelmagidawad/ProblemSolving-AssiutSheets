#include <iostream>

using namespace std;

int main()
{
    char x;
    cin >> x;

    if (x >= 48 && x < 65) {
    cout << "IS DIGIT" << endl;
    }
    else if (x >= 65 && x < 97) {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (x >= 97) {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    return 0;
}