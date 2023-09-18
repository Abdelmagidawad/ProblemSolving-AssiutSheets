#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<stdio.h>
#include<vector>
using namespace std;
#define ll long long 

int main()
{
    
    int tc; cin >> tc;
    while (tc--) {
       
        string s, t,x; cin >> s >> t;
        int i = 0, j = 0;
        while (i < (s.size()) && j < (t.size())) {
            x += s[i];
            i++;
            x+=t[j];
            j++;
        }
        if (i < s.size()) x +=s.substr(i, s.size() - 1);
        if (j < t.size()) x += t.substr(j, t.size() - 1);
        cout <<x<< endl;
        
    }

   return 0;
}
 