#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d,x;
    cin >> a >> b >> c >> d;
    x = (a%100) * (b%100) * (c%100) * (d%100);
    if (x % 100 <= 9)

        cout << 0 << x % 100 << endl;
    else
        cout << x % 100 << endl;
    return 0;
}