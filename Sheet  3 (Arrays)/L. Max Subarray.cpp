#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;
int arr[1000];
int main()
{
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin >> n;
        arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            cout<< arr[i] << " ";
        }
        int i = 0,z=0;
        int ma;
        while (true) {
            if (z == n - 1) {
                break;
            }
            if (i == z) {
                ma = max(arr[i], arr[i + 1]);
            }
            else {
                ma = max(ma, arr[i + 1]);
            }
            cout << ma << " ";
            i++;
            if (i == n - 1) {
                z++;
                i = z;
            }
        }
        cout << endl;
    }

    return 0;
}