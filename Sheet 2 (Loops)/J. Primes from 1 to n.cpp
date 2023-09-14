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
    //J. Primes from 1 to n
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        bool t = 1;
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                t = 0;
                break;
            }
        }
        if (t)
            cout << i<<" ";
    }
    
    return 0;
}
 