#include <iostream>
#include<algorithm>
using namespace std;
//const int x=5e5+5;
//int fr[x];
int main()
{
int n; cin>>n;
char* x=new char [n];
for(int i=0;i<n;i++){
    cin>>x[i];
}
int c=0;
for(int i=0;i<n;i++){
if(x[i]!=x[i+1]) c++;
    
}
cout<<c<<endl;
    return 0;
}