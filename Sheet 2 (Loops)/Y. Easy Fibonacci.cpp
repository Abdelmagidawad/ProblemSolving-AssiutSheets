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
    //Y. Easy Fibonacci
    int n1 = 0, n2 = 1, temp = 0;
    int n;
    cin >> n;

    // 0 1 2 3 5 8

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << 0 << " ";
            continue;
        }
        if (i == 1) {
            cout << 1 << " ";
            continue;
        }
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        cout << temp << " " ;
    }

        return 0;
}