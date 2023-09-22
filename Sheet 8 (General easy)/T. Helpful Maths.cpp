#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s,x,y;
    cin>>s;
    int n=s.size();
    
    for(int i=0;i<n;i++){
        if(s[i]!='+'){
            x+=s[i];
        }
    }
    
    sort(x.begin(),x.end());
    
    for(int i=0;i<x.size()-1;i++){
            y+=x[i];
            y+='+';
    }
    
    y+=x[x.size()-1];
    cout<<y;

    return 0;
}
