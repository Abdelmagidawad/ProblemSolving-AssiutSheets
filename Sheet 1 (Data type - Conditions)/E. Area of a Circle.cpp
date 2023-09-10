#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double R,a;
    cin >> R;
    a = (3.141592653 * R * R);
    cout <<fixed<<setprecision(9)<< a << endl;
   

    return 0;
}