#include <iostream>
#include <string>

using namespace std;

int Arr[1000 + 5];
int main()
{
	int x,S = 0, D = 0;
	cin >> x;
	 Arr[x];
	for (int i = 1; i <= x;i++)
		cin >> Arr[i];

	int l = 1, r = x;
	for (int i = 1; i <= x; ++i) {
		if (i % 2 == 1) {
			if (Arr[l] > Arr[r]) {
				S += Arr[l];
				l++;
			}
			else {
				S += Arr[r];
				r--;
			}
		}
		else {
			if (Arr[l] > Arr[r]) {
				D += Arr[l];
				l++;
			}
			else {
				D += Arr[r];
				r--;
			}
		}
	}
	cout << S << " " << D << endl;

return 0;
}