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
    if (n == 1) {
        cout << -1 << endl;
        return 0;
    }
    else{
        for (int i = 2; i <= n; i += 2) {
            cout << i << endl;
        }
    }
        return 0;
}