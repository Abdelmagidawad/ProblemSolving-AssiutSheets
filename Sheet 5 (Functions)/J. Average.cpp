#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
long long n; cin>>n;
double *arr=new double [n];
double x=0,y;
for(int i=0;i<n;i++){
    cin>>arr[i];
    x+=arr[i];
}
y=x/n;
cout<<fixed<<setprecision(6)<<y<<endl;

    return 0;
}