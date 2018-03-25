#include<iostream>
using namespace std;
int main()
{
    int t,a,b,d;
    cin>>a>>b>>d;
    t=a+b;
    int s[111];
    int i=0;
    if(t==0)
        cout<<0;
    else{
        while(t!=0)
    {
        s[i++]=t%d;
        t=t/d;
    }
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<s[j];
    }
    return 0;
}
