#include<stdio.h>
typedef long long ll;
ll gcd(ll a,ll b){
return b==0?a:gcd(b,a%b);
}
int main()
{
    int n;
    ll lcp,a,b,c,d;
    int i=1;
    scanf("%d",&n);
    scanf("%lld/%lld",&a,&b);
    int t=gcd(a,b);
    if(a){
        a/=t;
        b/=t;
    }
    while(i<n){
        scanf("%lld/%lld",&c,&d);
        lcp=b/gcd(b,d)*d;
        a=a*lcp/b+c*lcp/d;
        b=lcp;
        int t=gcd(a,b);
        if(t){
            a/=t;
            b/=t;
        }
        i++;
    }
    if(a&&a/b==0)
        printf("%lld/%lld",a%b,b);
    else if(a%b==0)
        printf("%lld\n",a/b);
    else
        printf("%lld %lld/%lld\n",a/b,a%b,b);
    return 0;
}
