#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
#include<stack>
void print (int n) {
	for (int i = 1; i <= n; i++) {
		if (i == n) 
			cout << i;
		else
		  cout << i << " ";

	}
	cout << endl;
	}
int main()
{
	int n;
	cin >> n;
	print(n);
	
	return 0;
}