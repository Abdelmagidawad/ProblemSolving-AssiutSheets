#include <iostream>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        bool x= false;
        for(int i=0;i<s.size();i++){
        if((s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')||(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1')) {
            x=true;
            break;
        }
        
                }   
        
        if(x)cout<<"Good"<<endl;else cout<<"Bad"<<endl;
    }
    return 0;
}