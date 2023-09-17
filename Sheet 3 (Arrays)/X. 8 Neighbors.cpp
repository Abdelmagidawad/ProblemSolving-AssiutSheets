#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;
//X. 8 Neighbors
char arr[100 + 5][100 + 5];
int main()
{
    int n, m;
    cin >> n >> m;
    arr[n][m];
    bool ex = false;
   
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char c;
            cin >> c;
            if (c == '.')ex = true;
            arr[i][j]=c;
        }
    }
    int x, y;
    cin >> x >> y;
    if (!ex)cout << "yes";
    else{
        if (arr[x+1][y ] == 'x' && arr[x][y + 1] == 'x' && arr[x - 1][y] == 'x' && arr[x][y-1] == 'x'
            && arr[x + 1][y + 1] == 'x' && arr[x - 1][y - 1] == 'x' &&
            arr[x + 1][y - 1] == 'x' && arr[x - 1][y + 1] == 'x') {
            cout << "yes" << endl;
            return 0;
        }
        else
        {
            cout << "no";
            return 0;
        }
        }

    return 0;
}