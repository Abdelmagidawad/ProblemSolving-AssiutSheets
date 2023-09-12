#include <iostream>

using namespace std;

int main()
{
    char s, q;
    int a, b;
    long long c;
    
    cin >> a >> s >> b >> q >> c;

    if ((s == '+' && a + b == c)||(s=='-'&&a-b==c)||(s=='*'&&a*b==c)) {
        cout << "Yes" << endl;
    }
    if (s == '+' && a + b != c) {
        cout << a + b << endl;
    }
    if (s == '-' && a - b != c) {
        cout << a - b << endl;
    }
    if (s == '*' && a * b != c) {
        cout << a * b << endl;
    }
        
  
    return 0;
}