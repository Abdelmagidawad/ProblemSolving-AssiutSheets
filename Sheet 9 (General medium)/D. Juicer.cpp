#include <iostream>

using namespace std;

#define ll long long 

int main()
{
     ll n,b,d,sum=0,times=0;

	 cin>>n>>b>>d;
	 for(int i=0;i<n;i++){
	int x;
	cin>>x;
	if(x<=b){
		sum+=x;
	}
	if(sum>d){
		times+=1;
		sum=0;
	}

	 }

        cout<<times;

    return 0;
}