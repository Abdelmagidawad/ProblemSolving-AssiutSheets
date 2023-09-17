#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;

const int x = 5e5 + 5;
int fr[x];
int arr[100000 + 5];

int main()
{
    int n,m;
    cin >> n>>m;
    arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        fr[arr[i]]++;
    }
    for (int i = 1; i <= m; i++) {
        cout << fr[i] << endl;
    }
        
    return 0;
}
 