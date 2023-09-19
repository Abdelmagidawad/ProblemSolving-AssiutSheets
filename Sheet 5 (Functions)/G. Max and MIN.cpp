#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
#include<stack>

int max(int arr[], int n) {
	int x=0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > x) {
			x = arr[i];
		}
	}
	return x;
}
int mini(int arr[], int n) {
	int y = arr[0];
	for (int i = 0; i < n;i++) {
		if (arr[i] < y) {
			y = arr[i];
		}
	}
	return y;
}

int main()
{
	int n;
	cin >> n;
	int* arr =new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << mini(arr, n) << " " << max(arr, n) << endl;
	return 0;
}