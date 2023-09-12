#include <iostream>

using namespace std;

int main()
{
    char s;
    int n,y;
    cin >> n>>s>>y;
    if (y == 0) {
        cout << "int"<<" "<< n << endl;
    }
    else {
        cout << "float"<<" " << n << " "<<"."<< y << endl;
    }

  
    return 0;
}