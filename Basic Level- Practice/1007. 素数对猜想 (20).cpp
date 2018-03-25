#include<stdio.h>
#include<math.h>
int a[100000];
int main()
{
    int n,i,t,j,k;
    scanf("%d",&n);
    k=0;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
                break;
        }
        if(j>sqrt(i))
        {
            a[k++]=i;
        }
    }
    t=0;
    for(i=1;i<=n;i++)
    {
        if(a[i+1]-a[i]==2){
            t++;
        }
    }
    printf("%d",t);
    return 0;
}
