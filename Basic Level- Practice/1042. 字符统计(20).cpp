#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int num[128]={0};
    string c;
    getline(cin,c);
    int len=c.length();
    for(int i=0;i<len;i++)
    {
        if(c[i]>='a'&&c[i]<='z')
            num[c[i]]++;
        else if(c[i]>='A'&&c[i]<='Z')
        {
            c[i]=c[i]-'A'+'a';
            num[c[i]]++;
        }
    }
    int maxm=0;
    char ch;
    for(int i='a';i<='z';i++)
      {
          if(num[i]>maxm)
          {
              maxm=num[i];
              ch=char(i);
          }
      }
      cout<<ch<<" "<<maxm<<endl;
    return 0;
}
