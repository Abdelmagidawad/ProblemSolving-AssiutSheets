#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>

using namespace std;
int arr[100000 + 5];
int main()
{
    int n;
    cin >> n;
    arr[n];

    int min = 1000000;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] < min)
            min = arr[i];
    }
  
    int coun = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == min)
            coun++;
    }
    if (coun % 2 != 0)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;

    
    return 0;
}
 