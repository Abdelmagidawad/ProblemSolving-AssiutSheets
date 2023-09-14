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
    int a, b, t;
    cin >> a >> b;
    while (b != 0) {
        t = a % b;
        a=b;
        b = t;
    }
    cout << a << endl;
        return 0;
}