#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a=new int [n] ,*b=new int [n];

    int rated = 0;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
        if(a[i] != b[i]){
            rated = 1;
        }
    }
    if(rated == 1){
        cout<<"rated\n";
        return 0;
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] < a[j]){
                rated = -1;
            }
        }
    }


    (rated == -1)?cout<<"unrated\n":cout<<"maybe\n";
    

    return 0;
}
