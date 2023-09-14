// Contest #1

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	char c;
	cin >> c;
	if (c >= 'a' && c <= 'z') {
		
		if (c == 'z') cout << 'a' << endl;
		else {
			char x = c + 1;
			cout << x << endl;
		}
		
	}
	return 0;
}