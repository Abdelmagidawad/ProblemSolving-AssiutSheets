#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
#include<stack>



int main()
{
	int t; cin >> t;
	while (t--) {
		int n; char c;
		cin >> n >> c;
		while (n--) {
			cout << c << " ";
		}
		cout << endl;
	}
	return 0;
}
 