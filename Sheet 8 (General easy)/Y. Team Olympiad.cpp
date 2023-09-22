#include <iostream>
#include<string>
#include<algorithm>
#include <queue>
using namespace std;

int main()
{
        queue<int> one;
        queue<int> two;
        queue<int> three;
 
        int n,k;
cin>>n;
        
        for(int i=1;i<=n;i++)
        {
            cin>>k;

            if(k==1)
                one.push(i);

            else if(k==2)
                two.push(i);

            else if(k==3)
                three.push(i);
        }

        int min=100000;
        if(min>one.size())
            min=one.size();

        if(min>two.size())
            min=two.size();

        if(min>three.size())
            min=three.size();

        cout<<min<<endl;
        for(int i=1;i<=min;i++)
        {
            cout<<one.front()<<" "<<two.front()<<" "<<three.front()<<endl;
            one.pop();
            two.pop();
            three.pop();
        }


    

    return 0;
}
