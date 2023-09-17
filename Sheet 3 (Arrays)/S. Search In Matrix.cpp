#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;

int arr[1000][1000];
int main()
{

    int n, m;
    cin >> n >> m;
     arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int x;
    cin >> x;
    bool y = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == x) {
                y = true;
                break;
            }

        }
    }
    if (y)
        cout << "will not take number" << endl;
    else
        cout << "will take number" << endl; 

    
    return 0;
}