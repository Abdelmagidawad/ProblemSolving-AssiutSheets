#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
// string s,x;  cin>>s;
// x=s;
// sort(s.begin()+1,s.end());
// cout<<min(x,s)<<endl;

    string name;
    cin>>name;
    string test=name,tn;
                                                                                 //a c c c  i m p
    for(int  i=1;i<name.size();i++){                //0 1 2 3 4 5 6
        tn=name;
        sort(tn.begin(),tn.begin()+i);
        if(i<name.size()-1)
        sort(tn.begin()+i,tn.end());

           test=min(test,tn);
    }
    cout<<test;

    return 0;
}