#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<stack>

using namespace std;

#define ll long long 

int main()
{
    int x,y, z;
    cin >> x >> y >> z;
    //cout << min({ x,y,z }) << " " << max({ x,y,z }) << endl;

    if (x > y) {
        if (x > z)  
            cout << "x= " << x << " is greater number" << endl;
        else  
            cout << "z= " << z << " is the greater number" << endl;
    }
    else {
        if (y > z)
            cout << "y= " << y << " is greater number" << endl;
        else
            cout << "z=" << z << "is greater number" << endl;
    }
    return 0;
}