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
    //V. PUM
    int n;
    cin >> n;
    int i = 1;
    while (n) {
       

        cout << i<<" " << i + 1<<" " << i + 2<<" " << "PUM" << endl;
        i += 4;

        n--;
    }
        return 0;
}