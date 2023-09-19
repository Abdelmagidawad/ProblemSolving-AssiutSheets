#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<stdio.h>
#include<vector>
using namespace std;
#define ll long long 

int main()
{
    vector<int> v;
    int n; cin >> n;
    int* arr = new int[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0)
            v.push_back(arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            cout << arr[i] << " ";
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
   

   return 0;
}