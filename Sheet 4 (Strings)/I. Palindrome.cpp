// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
string x,y;  cin>>x;
for(int i=(x.size()-1);i>=0;i--) y+=x[i];
bool z=true;
for(int i=0;i<x.size();i++){
    if(x[i]!=y[i]){
        z=false;
        break;
    }
}
(z)?cout<<"YES"<<endl:cout<<"NO"<<endl;

    return 0;
}