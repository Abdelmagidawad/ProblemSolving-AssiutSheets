#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;
//int arr[100+5];
long long fact(int n) {

    if (n == 1){
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}
int main()
{
    long long n;
    cin >> n;
    cout << fact(n) << endl;
    
  return 0;
}