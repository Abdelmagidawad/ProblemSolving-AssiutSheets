#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>

#include<cstdlib>

using namespace std;

int A[10000];
int main()
{
    int n;
    cin >> n;
    A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int j = 0; j < n; j++) {
       
        if (A[j] <= 10)

            cout <<" A["<< j <<"] = "<< A[j] << endl;
    }

    return 0;
}

 