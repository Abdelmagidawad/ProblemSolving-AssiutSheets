#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
#include<stack>

int main()
{
	string s,x="hello";
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (x[0] == s[i])
			x = x.substr(1, x.size());

}
	if (x == "")cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}