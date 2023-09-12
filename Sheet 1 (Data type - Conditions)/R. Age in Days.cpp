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
    int n;
    cin >> n;
    int year,mounth,days;
    year = n / 365;
    n %=365;

    mounth = n / 30;

    days = n % 30;

    cout << year << " years" << endl << mounth << " months" << endl << days << " days" << endl;
   return 0;
}