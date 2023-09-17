#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>

using namespace std;
//M. Replace MinMax
int arr[100000 + 5];
int main()
{
    int n;
    cin >> n;
    arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int mx = -1000000;
    int mi = 1000000;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mx)
            mx = arr[i];
        if (arr[i] < mi)
            mi = arr[i];
    }
   
    for (int i = 0; i < n; i++) {
        if (arr[i] == mi)
            arr[i] = mx;
        else if (arr[i] == mx)
            arr[i] = mi;
   }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
   
    
   
    return 0;
}