#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
#include<algorithm>

using namespace std;

#define ll long long 

int main()
{
    int n;  cin >> n;
    int* arr = new int[n];

    for (int i= 0; i < n; i++) cin >> arr[i];

    bool x = false;

    for (int i = 0; i < n/2; i++) {
        if (arr[i] == arr[n - i - 1])  x = true;
        else {
            x = false;
            break;
        }
    }
    (x)?cout << "YES" << endl:cout << "NO" << endl;
    
    return 0;
}