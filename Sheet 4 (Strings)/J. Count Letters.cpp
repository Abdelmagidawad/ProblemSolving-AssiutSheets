#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<stdio.h>
#include<map>
using namespace std;
#define ll long long 

int main()
{
    string s; cin >> s;
    int arr[26] = { 0 };
    for (int i = 0; i < s.size(); i++) arr[s[i] - 'a']++;
    for (int i = 0; i < 26; i++) if(arr[i]!=0)cout << char(i + 'a') << " : " << arr[i] << endl;

   return 0;
}