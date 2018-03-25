#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    int count=0;
    while(cin>>s)
    {
        if(s[0]=='.')
            break;
        count++;
        if(count==2)
            s1=s;
        if(count==14)
            s2=s;
    }
    if(count>=14)
        cout<<s1<<" and "<<s2<<" are inviting you to dinner...";
     if(count>=2&&count<14)
      cout<<s1<<" is the only one for you...";
     if(count<2)
     cout<<"Momo... No one is for you ...";
    return 0;
}
