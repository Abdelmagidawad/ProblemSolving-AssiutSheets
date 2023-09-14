#include <iostream>

using namespace std;

int main()
{
    int count = 0;

    while(count<=9999){

        int x;
        cin >> x;

        if (x == 1999) {
            cout << "Correct" << endl;
            break;
        }
        else {
            cout << "Wrong" << endl;
        }
        
    }
    
   
    return 0;
}