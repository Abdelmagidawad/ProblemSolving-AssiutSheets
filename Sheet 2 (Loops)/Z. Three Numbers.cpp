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
   //Z. Three Numbers
    int k, s;
    cin >> k >> s;
    int counter = 0;
    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            if (s - i - j >= 0 && s - i - j <= k)
                counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
 