#include <iostream>

using namespace std;
int i=1;
void print(int n){
    if(n==0)
    return;
    cout<<i<<endl;
    i++;
    
   return print(n-1);
    
}
int main()
{
    int n;cin>>n;
    print(n);

    return 0;
}