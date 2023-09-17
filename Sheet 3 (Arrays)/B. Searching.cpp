#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>

using namespace std;
int arr[100000+5];

int main()
{
    int n;
    cin >> n;
    arr[n];
   
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x,y;
    cin >> x;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
           
            y = i;
            break;
        }
        else {
            y = -1;
        }
       
    }
        cout << y << endl;
       return 0;
}