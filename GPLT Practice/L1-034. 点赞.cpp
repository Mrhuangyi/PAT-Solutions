#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,k,x,a[1000],b[1000];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    cin>>n;
    while(n--)
    {
        cin>>k;
        while(k--)
        {
            cin>>x;
            a[x]++;
            b[x]++;
        }
    }
    sort(a,a+1000,cmp);
    for(int i=1000;i>0;i--)
    {
        if(b[i]==a[0])
        {
            cout<<i<<" "<<b[i];
            break;
        }
    }
    return 0;
}
