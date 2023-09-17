#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>

using namespace std;
int A[1000000 + 5];
int main()
{
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int sum = 10000000;
        for (int i = 0; i < n; i++) {
            for (int j = (i + 1); j < n; j++) {
                if (sum > (A[i] + A[j] + j - i))
                    sum = A[i] + A[j] + j - i;
            }
        }
        cout << sum << endl;
    }
    


    return 0;
}