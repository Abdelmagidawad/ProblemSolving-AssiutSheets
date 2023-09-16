#include <iostream>

using namespace std;

int main()
{
    int n,e=1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = (n-1); j >= i; j--)
            cout << " ";
        for (int k = 0; k < e; k++)
            cout << "*";
        cout << endl;
        e += 2;
    }
        return 0;
}
 