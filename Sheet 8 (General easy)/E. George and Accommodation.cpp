#include <iostream>

using namespace std;

int main()
{
    int tc, people,capacity,count=0;
    
    cin>>tc;
    
    while(tc--){
        cin>>people>>capacity;
        
        if(capacity-people>=2) count++;
    }
    cout<<count;

    return 0;
}