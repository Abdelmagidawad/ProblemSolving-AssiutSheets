#include <iostream>
 #include<cmath>
using namespace std;
 
int main()
{
   int t; cin>>t;
   while(t--){
       bool x=true;
       int n; cin>>n;
       if(n<=1){
           cout<<"NO"<<endl;
           
           continue;
       }
       else{
           for(int i=2;i<=sqrt(n);i++){
               if(n%i==0){
                   x=false;
                   break;
               }
           }
       }
       if(x) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
 
    return 0;
}