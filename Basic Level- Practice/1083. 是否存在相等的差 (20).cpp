#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int a[10001];
int b[10001]={0};
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        int t=abs(a[i]-i);
        b[t]++;
    }
    for(int i=9999;i>=0;i--){
        if(b[i]>1){
            cout<<i<<" "<<b[i]<<endl;
        }
    }
    return 0;
}
