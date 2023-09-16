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
    int n;
    cin >> n;
    int e = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= e; k++) {
            cout << "*";
        }
        cout << endl;
        e += 2;
    }

    e = n * 2 - 1;
    for (int l = 1; l <= n; l++) {
        for (int m = 0; m < e; m++)
            cout << "*";
        cout << endl;
        e -= 2;
        for (int z = 0; z < l; z++) {
            cout << " ";
        }
    }
   
    return 0;
}

 