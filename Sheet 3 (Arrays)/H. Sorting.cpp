#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>

using namespace std;
int vector[1000 + 5];

int main()
{
    int s;
    cin >> s;
     vector[s];
     for (int i = 0; i < s; i++)
         cin >> vector[i];
     sort(vector, vector + s);
     for (int i = 0; i < s; i++) {
         cout << vector[i]<<" ";
     }

       return 0;
}