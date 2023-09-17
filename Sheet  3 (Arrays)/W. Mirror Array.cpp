#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;

int arr[100 + 5][100 + 5];
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
  
    for (int i = 0; i < n; i++) {
        for (int j = m-1; j >=0; j--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }
   

   
    return 0;
}