#include<iostream>
#include<algorithm>
using namespace std;
struct shot{
    string id;
    int x,y;
}a[10001];
bool cmp(shot a,shot b){
    if(a.x*a.x+a.y*a.y!=b.x*b.x+b.y*b.y)
        return a.x*a.x+a.y*a.y>b.x*b.x+b.y*b.y;
}
int main()
{
    int n;
    cin>>n;
    int minm=0,maxm=0;
    for(int i=0;i<n;i++){
        cin>>a[i].id>>a[i].x>>a[i].y;
    }
    sort(a,a+n,cmp);
    cout<<a[n-1].id<<" "<<a[0].id<<endl;
    return 0;
}
