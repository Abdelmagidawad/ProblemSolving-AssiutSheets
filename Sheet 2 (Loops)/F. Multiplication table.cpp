#include <iostream>
using namespace std;

int main()
{
    int n,x;
    cin >> n;
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= i; j++) {
           
            x = n * j;
        }
        cout << n<<" " << '*'<<" " << i <<" "<< '=' <<" "<< x << endl;
    }
   
    return 0;
}
 