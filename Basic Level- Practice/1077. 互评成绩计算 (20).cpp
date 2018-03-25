#include<iostream>
using namespace std;
int main()
{
    int n,m,g1,g2,x,temp;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>g1;
        int cnt=-2,maxn=-1,minm=m+1,sum=0;
        for(int i=0;i<n-1;i++)
        {
            cin>>x;
            if(x>=0&&x<=m)
            {
                if(x<minm) minm=x;
                if(x>maxn) maxn=x;
                sum+=x;
                cnt++;
            }

        }
 cout<<int((((sum-maxn-minm)*1.0/cnt)+g1)/2+0.5)<<endl;
    }
    return 0;
}
