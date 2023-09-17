#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>

using namespace std;
int arr[100000+5];
int main()
{
    //E. Lowest Number
    int n;
    cin >> n;
    arr[n];
    int mini =100000;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i]<mini) {
            mini = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == mini) {
            cout << arr[i] << " " << i + 1 << endl;
            break;
        }
   }
    return 0;
}
 