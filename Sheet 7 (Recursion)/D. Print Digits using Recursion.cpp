#include <iostream>
#include<queue>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
    string s;  cin>>s;
    queue<char>q;
  for(int i=0;i<s.size();i++)
  q.push(s[i]);
  for(int i=0;!q.empty();i++){
  cout<<q.front()<<" ";
  q.pop();}
  cout<<endl;
}

    return 0;
}