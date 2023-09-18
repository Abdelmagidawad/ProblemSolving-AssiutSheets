#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
#include<stack>

int main()
{
	string a, b;
	cin >> a >> b;

	cout << a.size() << " " << b.size() << endl;
	cout << a + b << endl;
	swap(a[0], b[0]);
	cout << a << " " << b << endl;
	return 0;
}
 