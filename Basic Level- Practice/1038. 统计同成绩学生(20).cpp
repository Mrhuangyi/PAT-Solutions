#include<iostream>
#include<cstdio>
using namespace std;
int a[100001]={0};
int main()
{
    int n,k,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[x]++;
    }
    scanf("%d",&k);
    int score;
    for(int i=0;i<k-1;i++)
    {
        scanf("%d",&score);
        printf("%d ",a[score]);
    }
    scanf("%d",&score);
    printf("%d\n",a[score]);
    return 0;
}
