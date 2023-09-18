#include <iostream>
#include<algorithm>
using namespace std;
//const int x=5e5+5;
//int fr[x];
int main()
{
string s; cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]==',') s[i]=' ';
    else if(s[i]>='a'&&s[i]<='z') s[i]-=32;
    else s[i]+=32;
}
cout<<s<<endl;
    return 0;
}