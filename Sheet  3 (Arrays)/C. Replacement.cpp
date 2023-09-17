#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>

#include<cstdlib>

using namespace std;

int arr[10000];
int main()
{
    int n;
    cin >> n;
    arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
  
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            cout << 1 << " ";
        else if (arr[i] < 0)
            cout << 2 << " ";
        else if (arr[i] == 0)
            cout << 0 << " ";
    }
    return 0;
}