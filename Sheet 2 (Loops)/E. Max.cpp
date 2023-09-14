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
    int n,max=0;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (x > max)
            max = x;
    }
    cout << max << endl;

    return 0;
}