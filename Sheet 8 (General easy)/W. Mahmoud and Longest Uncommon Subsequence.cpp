#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
 string x,y;
 cin>>x>>y;
 
 if(x.size()!=y.size()) cout<<max(x.size(),y.size())<<endl;
 else if(x==y) cout<<-1<<endl;
 else cout<<x.size()<<endl;
    

    return 0;
}
