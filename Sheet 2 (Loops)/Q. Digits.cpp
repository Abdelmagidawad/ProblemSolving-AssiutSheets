#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>

#include<cstdlib>

using namespace std;


int main()
{
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        if (n == 0)
            cout << 0;
        else {
            while (n > 0) {
                cout << n % 10 << " ";
                n = n / 10;

            }
        }
        cout << endl;
    }
   
        return 0;
}