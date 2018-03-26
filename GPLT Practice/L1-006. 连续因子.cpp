#include<cstdio>
#include<cmath>
#include<cstring>
#define LL long long
using namespace std;
int main()
{
    LL n,a,b,x,y=-1,i,j;
    scanf("%lld",&n);
    LL m=(LL)sqrt(n);
    x=n;
    for(i=2; i<=m; i++)
    {
        if(n%i!=0) continue;
        a=1;
        for(j=i; j<=m; j++)
        {
            if(n%(a*j)!=0||a*j>n) break;
            a*=j;
        }
        if(j-i>y) {y=j-i; x=i;}
    }
    if(y==-1) y=1;
    printf("%lld\n",y);
    printf("%lld",x);
    for(LL t=x+1; t<y+x; t++)
        printf("*%lld",t);
    printf("\n");
    return 0;
}
