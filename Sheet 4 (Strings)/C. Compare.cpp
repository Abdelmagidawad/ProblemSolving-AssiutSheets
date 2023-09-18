#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
#include<stack>

int main()
{
	
	string x, y;
	cin >> x >> y;
	int a = max(x.size(), y.size());
	
	for (int i = 0; i < a; i++) {
		if (x[i] < y[i]) {
			cout << x << endl;
			return 0;
		}
		else if(x[i]>y[i]) {
			cout << y << endl;
			return 0;
		}
	}
	cout << y <<endl;

	return 0;
}