#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>

using namespace std;

int main()
{
  //I. Palindrome
    int n,x,rev=0;
    cin >> n;
    int y = n;
    
    //321
    //rev=1+(0*10)=1
    //rev=2+(1*10)=12
    //rev=3+(12*10)=123
    //123

    while (n > 0) {
        x = n % 10;
        rev = x + (rev * 10);
        n = n / 10;
    }
    if (y == rev)
        cout << rev<<endl<<"YES" << endl;
    else
        cout <<rev<<endl<< "NO" << endl;
    
    return 0;
}
 