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
    //U. Some Sums
    int n, a, b,s=0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        int sum1 = 0;
        int x = i;
        while (x > 0) {
            sum1 += x % 10;
            x = x / 10;
        }
        if (sum1 >= a && sum1 <= b)
            s += i;
    }
    cout << s << endl;
    return 0;
}