#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>

using namespace std;

int A[100000 + 5];
int main()
{
    int n;
    cin >> n;
    A[n];
    
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
   

    for (int j = 0; j < n/2; j++) {
        if (A[j] != A[n - j - 1]) {
            cout << "NO" ;
            return 0;
           
        }
       
    }

        cout << "YES" ;
    return 0;
}