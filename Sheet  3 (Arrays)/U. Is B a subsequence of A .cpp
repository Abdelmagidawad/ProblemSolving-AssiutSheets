#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;
int a[10000 + 5];
int b[10000 + 5];
int main()
{
    int n, m;
    cin >> n >> m;
    a[n];
    b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int x, y;
    for (x = 0, y = 0; (x < n && y < m); x++) {
        if (a[x] == b[y])
            y++;
    }
    if (y < m)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}