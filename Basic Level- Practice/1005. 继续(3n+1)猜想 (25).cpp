#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int i,j,x,k,a[111],b[11011],c[10011],d[111];
    scanf("%d",&k);
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    x=1;
    for(i=1;i<=k;i++)
    {
        scanf("%d",&a[i]);
        d[x]=a[i];
        x++;
    }

    for(i=1;i<=k;i++)
    {if(b[a[i]]==0){
    while(a[i]>1)
    {
        if(a[i]%2==0){
           b[a[i]/2]=1;
           a[i]=a[i]/2;
        }
           else{
            b[(a[i]*3+1)/2]=1;
            a[i]=(a[i]*3+1)/2;
    }
    }
    }
    }
    j=0;
   for(i=1;i<=k;i++)
   {
       if(b[d[i]]==0){
        c[j]=d[i];
       j++;
       }
   }
   sort(c,c+j,cmp);
   for(i=0;i<j-1;i++)
    {printf("%d ",c[i]);
    }
    printf("%d",c[j-1]);
    return 0;
}
