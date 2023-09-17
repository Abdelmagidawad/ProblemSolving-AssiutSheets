#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;
int arr[1000];
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        arr[n];
        int y = 0;
        for (int i=0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
           
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[j - 1])
                    y++;
                else
                    break;
            }
        }
        cout << y+n << endl;
    }
   
    return 0;
}
 