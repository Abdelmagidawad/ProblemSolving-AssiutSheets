#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;

long long arr[100000 + 5];
int main()
{
    int n, q;
    cin >> n >> q;
    arr[n];
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        int num; cin >> num;
        sum += num;
         arr[i]=sum;
    }
    sum = 0;
    while (q--) {
        int l, r;
        cin >> l >> r;
        if (l == 1)
            sum = arr[r];
        else
            sum = arr[r] - arr[l - 1];
       
        cout << sum << endl;
    }
    
    return 0;
}