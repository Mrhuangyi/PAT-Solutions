#include<iostream>
#include<set>
#include<cstring>
using namespace std;
int main()
{
    int n,i,m,t;
    string s;
    set<string> a,b;
    cin>>t;
    while(t--)
    {
      cin>>n;
      if(n>=2){
      for(i=0;i<n;i++)
      {
          cin>>s;
          a.insert(s);
      }
      }
      else
      {
          cin>>s;
      }
    }
      cin>>m;
      int flag=0;
      for(i=0;i<m;i++)
      {
          cin>>s;
          if(a.find(s)==a.end()&&b.find(s)==b.end())
          {
              b.insert(s);
              if(flag)
                cout<<" ";
              cout<<s;
              flag=1;
          }
      }
      if(!flag)
        cout<<"No one is handsome";
      return 0;
}
