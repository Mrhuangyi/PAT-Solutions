#include<iostream>
#include<cstdio>
using namespace std;
struct pat{
char zhunkao[14];
int shiji;
int kaoshi;
}a[1001];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s%d%d",a[i].zhunkao,&a[i].shiji,&a[i].kaoshi);
    }
    int m;
    int shiji2;
    scanf("%d",&m);
    for(int j=0;j<m;j++)
    {
        scanf("%d",&shiji2);
        for(int i=0;i<n;i++)
        {
            if(a[i].shiji==shiji2)
            {
                printf("%s %d\n",a[i].zhunkao,a[i].kaoshi);
            }
        }
    }
    return 0;
}
