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
    //N. Check Code
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    bool st = 1;
    int sum = 0;
    if (s[a] != '-')
        cout << "No" << endl;
    else {
        for (int i = 0; i < (a + b + 1); i++) {
            if ((int)s[i] >= 48 && (int)s[i] <= 57)
                sum++;
        }

        if (sum == (a + b)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
 