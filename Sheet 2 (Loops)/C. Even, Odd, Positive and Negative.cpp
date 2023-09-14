#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ev = 0, od = 0, ne = 0, po = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x >0)
            po++;
        else if (x < 0)
            ne++;
        
        if (x % 2 == 0)
            ev++;
        else
            od++;
    }
    cout << "Even: " << ev << endl;
    cout << "Odd: " << od << endl;
    cout << "Positive: " << po << endl;
    cout << "Negative: " <<ne<< endl;

    return 0;
}