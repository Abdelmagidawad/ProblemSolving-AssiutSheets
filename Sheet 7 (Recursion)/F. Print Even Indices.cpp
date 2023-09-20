#include <iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
    int n;  cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)  cin >> arr[i];
    stack<int>s;
    for (int i = 0; i < n; i += 2) {
        s.push(arr[i]);
    }

    for (int i = 0; !s.empty(); i++) {
        cout << s.top() << " ";
        s.pop();
    }
  
    return 0;
}
 