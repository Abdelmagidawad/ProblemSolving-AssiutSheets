#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int c,s,n;
    
    pair<int, int>a[1000];
    
    while(cin>>s>>n)
    {
        c=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;

        }
        sort(a,a+n);
         for(int i=0;i<n;i++)
         {
             if(s<=a[i].first)
             {
                 c=0;
                 break;
             }
             else
             {
                 s=s+a[i].second;
             }
         }
         if(c==0)
            cout<<"NO\n";
         else
            cout<<"YES\n";
    }
    return 0;
}