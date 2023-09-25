#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long 

int main()
{
     int n;
	 cin>>n;
	 int * arr =new int [n];
	 
	 for(int i=0;i<n;i++){
		 cin>>arr[i];
	 }
	 
	 for(int i=0;i<n;i++){
		 long long  min_i;
		 long long max_i;
	
		 if(!i){
			min_i=abs(arr[i]-arr[i+1]);
			max_i=abs(arr[i]-arr[n-1]);
		 }
		 else if(i==n-1){
			 max_i=abs(arr[i]-arr[0]);
			 min_i=abs(arr[i]-arr[i-1]);
		 }
		 else{
			 min_i=min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
			 max_i=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
		 }
		 cout<<min_i<<" "<<max_i<<"\n";
	 }
    return 0;
}
