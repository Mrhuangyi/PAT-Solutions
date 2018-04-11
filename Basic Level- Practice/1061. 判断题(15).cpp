#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,a[101],b[101],c[101],sum[101]={0};
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&c[j]);
            if(c[j]==b[j])
                sum[i]+=a[j];
        }
        printf("%d\n",sum[i]);
    }
    return 0;
}
