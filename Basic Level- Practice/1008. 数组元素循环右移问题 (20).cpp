#include<iostream>
using namespace std;
int main()
{
    int a[105];
    int count=0;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=n-m%n;
    for(int j=m;j<n;j++)
    {
        cout<<a[j];
        count++;
        if(count!=n)
            cout<<" ";
    }
    for(int k=0;k<m;k++)
    {
        cout<<a[k];
        count++;
        if(count!=n)
            cout<<" ";
    }
    cout<<endl;
    return 0;
}
