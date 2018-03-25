#include<iostream>
#include<set>
#include<cstring>
using namespace std;
int main()
{
      string s;
      cin>>s;
      int g,p,l,t;
      g=p=l=t=0;
      for(int i=0;i<s.size();i++)
      {
          s[i]=toupper(s[i]);
          if(s[i]=='G')
            g++;
          if(s[i]=='P')
            p++;
          if(s[i]=='L')
            l++;
          if(s[i]=='T')
            t++;
      }
      while(g||p||l||t)
      {
          if(g)
          {
              cout<<"G";
              g--;
          }
          if(p)
          {
              cout<<"P";
              p--;
          }
          if(l)
          {
              cout<<"L";
              l--;
          }
          if(t)
          {
              cout<<"T";
              t--;
          }
      }
      return 0;
}
