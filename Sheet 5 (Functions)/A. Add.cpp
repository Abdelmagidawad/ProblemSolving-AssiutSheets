#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
#include<stack>
int sumation (int x, int y) {
	int z = x + y;
	return z;
	}
int main()
{
	int x, y;
	cin >>x>> y;
	cout<<sumation(x, y)<<endl;
	
	
	return 0;
}