#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
#include<stack>
void swapping(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << x << " " << y << endl;
}
int main()
{
	int x, y;
	cin >>x>> y;
	swapping(x, y);
	
	
	return 0;
}
 