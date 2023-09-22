#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    long long int x;
    cin >> n >> x;
    char sign;
    long long int d;
    long long int c = 0;
    for (int i = 0; i < n; i++) {
        cin >> sign >> d;
        if (sign == '+') {
            x += d;
        }
        else {
            if (x >= d) {
                x -= d;
            }
            else {
                c++;
            }
        }
    }
    cout << x << " " << c;
    
    return 0;
}