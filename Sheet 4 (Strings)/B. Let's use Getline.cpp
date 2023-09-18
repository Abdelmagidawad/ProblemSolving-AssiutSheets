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
    string s;
    getline(cin,s);
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 92)
            break;

        cout << s[i];
    }
   

    return 0;
}