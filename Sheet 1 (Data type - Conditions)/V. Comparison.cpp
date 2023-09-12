#include <iostream>

using namespace std;

int main()
{
    char s;
    int a ,b;
    cin >> a >> s >> b;

    if (s == '>' && a > b) {
        cout << "Right" << endl;
    }
      
    else if (s == '<' && a < b) {
        cout << "Right" << endl;
    }
    
    else if (s == '=' && a == b) {
        cout << "Right" << endl;
    }
    else {
        cout << "Wrong" << endl;
    }

    return 0;
}