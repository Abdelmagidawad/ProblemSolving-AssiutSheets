#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
int n;  cin>>n;
long long *arr=new long long [n];
for(int i=0;i<n;i++) cin>>arr[i];
long long sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
double x=sum/n;
cout<<fixed<<setprecision(6)<<x<<endl;
    return 0;
}