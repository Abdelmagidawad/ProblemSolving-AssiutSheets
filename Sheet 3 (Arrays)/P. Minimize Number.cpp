#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>

using namespace std;
int arr[1000000];

int main()
{
    int n;
    cin >> n;
    arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int st = 1;
    int coun = 0;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                st = 0;
                break;
            }
        }
        if (st == 1) {
            coun++;
            for (int i = 0; i < n; i++) {
                arr[i] /= 2;
            }
        }
        else
            break;
    }
    cout << coun << endl;

        
    return 0;
}