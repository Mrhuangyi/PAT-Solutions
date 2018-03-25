#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[11],b[55];
    int j=0,x,i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        while(a[i]!=0)
        {
            b[j]=i;
            a[i]--;
            j++;
        }
    }
    sort(b,b+j);
    if(b[0]!=0)
    {
        for(i=0;i<j;i++)
            printf("%d",b[i]);
    }
    else
    {
        for(i=0;i<j;i++)
        {
            if(b[i]!=0)
            {
             x=i;
             b[0]=b[x];
             b[x]=0;
             break;
            }
        }
        for(i=0;i<j;i++)
        {
            printf("%d",b[i]);
        }
    }
    return 0;
}
