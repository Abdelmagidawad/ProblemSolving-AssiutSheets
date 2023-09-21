#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    
    int n = S.size();

    for (int i = 0; i < n / 2; i++) {
        if (S[i] != '?' && S[n - i - 1] != '?' && S[i] != S[n - i - 1]) {
            cout << -1 << endl;
            return 0;
        }

        if (S[i] == '?' && S[n - i - 1] == '?') {
            S[i] = S[n - i - 1] = 'a'; 
        } else if (S[i] == '?') {
            S[i] = S[n - i - 1]; 
        } else {
            S[n - i - 1] = S[i]; 
        }
    }

    for (char& c : S) {
        if (c == '?') {
            c = 'a'; 
        }
    }

    cout << S << endl;

    return 0;
}