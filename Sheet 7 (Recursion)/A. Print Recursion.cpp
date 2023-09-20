#include <iostream>
#include <iomanip>
#include<string>
#include<algorithm>
using namespace std;
#include<stack>

void print(int n) {
	cout << "I love Recursion" << endl;
	n--;
	if (n > 0)
		print(n);
}

int main()
{
	int n; cin >> n;
	print(n);
	return 0;
}
 