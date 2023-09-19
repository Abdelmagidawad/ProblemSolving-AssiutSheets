#include <iostream>
#include<cmath>
using namespace std;

int main()
{
long long x,n;
cin>>x>>n;
long long sum=0;
for(int i=2;i<=n;i+=2){
    sum+=pow(x,i);
}
cout<<sum<<endl;


    return 0;
}