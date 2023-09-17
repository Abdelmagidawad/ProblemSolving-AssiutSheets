#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;

int a[10000];
int b[10000];
int main()
{
    int n;
    cin >> n;
    a[n];
    b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    for (int i = 0; i < n; i++) {
        if(a[i]!=b[i]){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    
    return 0;
}