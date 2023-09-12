#include <iostream>

using namespace std;

int main()
{
/*
//using if 
    char s;
    int a, b;
    cin >> a >> s >> b;

    if (s == '+') {
        cout << a + b << endl;
    }
    else if (s == '-') {
        cout << a - b << endl;
    }
    else if (s == '*') {
        cout << a * b << endl;
    }
    else if (s == '/') {
        cout << a / b << endl;
    }*/

//using Switch

char S;
    int A, B, Z;
    cin >> A >> S >> B;
    switch(S)
    {
        case '+':
            Z = A + B;
            break;
        case '-':
            Z = A - B;
            break;
        case '*':
            Z = A * B;
            break;
        case'/':
            Z = A / B;
            break;
 
    }
    cout << Z<< endl;

    return 0;

}