#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    char c;
    int i,line=0;
    cin>>n>>c;
    line=(int)sqrt(2*n+2)-1;
    line=(line-1)/2;
    for(i=line;i>=1;i--)
    {
        for(int k=line-i;k>=1;k--)
            cout<<" ";
        for(int j=i*2+1;j>=1;j--){
            cout<<c;}
        cout<<endl;
    }
    for(i=0;i<line;i++){
        cout<<" ";}
    cout<<c<<endl;
    for(i=1;i<=line;i++)
    {
        for(int k=line-i;k>=1;k--)
            cout<<" ";
        for(int j=i*2+1;j>=1;j--){
            cout<<c;}
        cout<<endl;
    }
    cout<<(n-(2*line*(line+2)+1));
    return 0;
}
