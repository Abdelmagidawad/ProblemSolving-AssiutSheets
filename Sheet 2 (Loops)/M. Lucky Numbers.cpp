#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>

using namespace std;

int main()
{
    //M. Lucky Numbers
    int a, b;
    cin >> a >> b;
    bool x = false;
    int counter = 0;

    for (int i = a; i <= b; i++) {
        int div = i;
        int dig = i % 10;
        while (div != 0) {
            if (dig == 4 || dig == 7) {
                x = true;
            }
            else {
                x = false;
                break;
            }
            div /= 10;
            dig = div % 10;
        }
        if (x) {
            cout << i << " ";
            x = false;
            counter++;
        }
    }
    if (counter == 0)
        cout << -1;

        return 0;
}
 