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
    //H. One Prime
    int x;
    cin >> x;

    bool y = 1;
    if (x <= 1)
        cout << "NO" << endl;

    else {
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                y = 0;
               // break;
            }
        }

        if (y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}
 