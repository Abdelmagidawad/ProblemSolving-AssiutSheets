#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>

using namespace std;

int main()
{
    //R. Sequence of Numbers and Sum
    while (true) {
        int n, m,sum=0;
        cin >> n >> m;
        if (n <= 0 || m <= 0)
            break;
        else {
            for (int i = min(n, m); i <= max(n, m); i++) {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
    }
    
    
    return 0;
}
 