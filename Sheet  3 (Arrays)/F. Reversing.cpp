#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>

using namespace std;
int arr[1000+5];
void revarsearray( int arr[], int s) {
    for (int i = 0; i < s / 2; i++) {
        swap(arr[i], arr[s - i - 1]);
    }
}

int main()
{
    int s;
    cin >> s;
    arr[s];
    for (int i = 0; i < s; i++)
        cin >> arr[i];
    revarsearray(arr, s);
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << endl;

        return 0;
}