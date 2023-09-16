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
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int coun = 0;
        while (n != 0) {
            if (n %2 != 0)
                coun++;
            n = n / 2;
        }
        int sum = 0;
        for (int i = 0; i < coun; i++) {
            sum += 1 * pow(2, i);
        }
        cout << sum << endl;
    }

    return 0;
}
 