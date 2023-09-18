#include <iostream>
#include <string>

using namespace std;

int main() {
    string S ;
    cin >> S;

     int found = S.find("EGYPT");

    
    while (found != string::npos) {
        S.replace(found, 5, " "); 
        found = S.find("EGYPT", found + 1); 
    }

    
    cout << S << endl;

    return 0;
}