#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    string s;
    float x;
    int a,b,t;
    x=0,a=0;
    cin>>s;
    t=s.size();
    if(s[0]=='-')
        b=s.size()-1;
    else
        b=s.size();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='2')
        a++;
    }
    x=1.0*a/b;
    if(s[0]=='-') x*=1.5;
    if((s[t-1]-'0')%2==0) x*=2;
    printf("%.2f%%\n",x*100);
    return 0;
}
