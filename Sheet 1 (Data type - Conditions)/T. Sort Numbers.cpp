#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c) {
        cout << a << endl;
    }
    else if (b <= a && b <= c) {
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }

    if ((a <= b && a >= c)||(a>=b&&a<=c)) {
        cout << a << endl;
    }
    else if ((b >= a && b <= c)||(b<=a&&b>=c)){
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }

    if (a >= b && a >= c) {
        cout << a << endl;
    }
    else if (b >= a && b >= c) {
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }

    cout << endl;

    cout << a << endl << b << endl << c<<endl;

        return 0;
}