#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>

using namespace std;
long long arr[100000+5];

int main()
{
    long long n;
    cin >> n;
    arr[n];
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << abs(sum) << endl;
   
       return 0;
}