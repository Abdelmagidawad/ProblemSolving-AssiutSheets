#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<stdio.h>
using namespace std;
#define ll long long 

int main()
{
    int n, x,z,indx;  
    cin >> n >> x;
    z = x % n;   indx = n - z;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = indx; i < n; i++) {
        cout << arr[i]<<" ";
    }
    for (int i = 0; i < indx; i++) {
        cout << arr[i]<<" ";
    }
    

   return 0;
}
 