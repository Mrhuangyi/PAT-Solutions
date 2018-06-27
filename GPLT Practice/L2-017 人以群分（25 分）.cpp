#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[100001];
int main()
{
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int sum1=0,sum2=0;
    for(int i=0;i<n/2;i++){
        sum1+=a[i];
    }
    for(int i=n/2;i<n;i++){
        sum2+=a[i];
    }
    printf("Outgoing #: %d\n",(n+1)/2);
    printf("Introverted #: %d\n",n/2);
    printf("Diff = %d\n",sum2-sum1);
    return 0;
}
