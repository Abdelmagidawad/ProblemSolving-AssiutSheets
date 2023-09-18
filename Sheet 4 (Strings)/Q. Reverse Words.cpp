#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
#include<stack>

int main()
{
	stack<char>x;
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ') {
			x.push(s[i]);
		}
		else {
			while (!x.empty()) { 
				cout<<x.top();
				
				x.pop();
			}
			cout << " ";
		}
	}
	while (!x.empty()) {
		cout << x.top();

		x.pop();
	}
	
	return 0;
}

 