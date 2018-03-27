#include<iostream>
#include<cstdio>
using namespace std;
typedef long long ll;
int main()
{
    ll galleon1,sickle1,knut1;
    ll galleon2,sickle2,knut2;
    scanf("%lld.%lld.%lld %lld.%lld.%lld",&galleon1,&sickle1,&knut1,&galleon2,&sickle2,&knut2);
    ll cha = galleon2*17*29+sickle2*29+knut2-galleon1*29*17-sickle1*29-knut1;
    if(cha==0)
        printf("0.0.0");
    else if(cha>0)
    {
        int a=cha%29;
        cha=cha/29;
        int b=cha%17;
        int c=cha/17;
        printf("%d.%d.%d\n",c,b,a);
    }
    else
    {
        cha=-cha;
         int a=cha%29;
        cha=cha/29;
        int b=cha%17;
        int c=cha/17;
        printf("-%d.%d.%d\n",c,b,a);
    }
    return 0;
}
