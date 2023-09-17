#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;
//T. Matrix
int arr[1000][1000];
int main()
{
    int n;
    cin >> n;
    arr[n][n];
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (i == j)
                s1 += arr[i][j];
           
        }
    }
    
   for (int i = 0; i < n; i++) {
      
            s2 += arr[i][n-i-1];
        
    }
    cout <<abs(s1-s2)<< endl;
    return 0;
}