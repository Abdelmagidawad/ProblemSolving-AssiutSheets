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
    long long feb1 = 0,feb2=1;
    long long current_feb = 0;
        if (n == 1) {
            cout << 0 << endl;
            return 0;
        }
        else if (n == 2) {
            cout << 1 << endl;
            return 0;
        }
        else {
            for (int i = 3; i <= n; i++) {
                current_feb = feb1 + feb2;
                feb1 = feb2;
                feb2 = current_feb;
            }
        }
    cout << current_feb << endl;


  
    return 0;
}
 