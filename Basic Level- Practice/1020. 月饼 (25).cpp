#include<stdio.h>
#include<algorithm>
using namespace std;
struct E
{
    float amount;
    float price;
    float avg;
}buf[1111];
bool cmp(E a,E b)
{
    return a.avg>b.avg;
}
int main()
{
    int n,m,t,i;
    float sum;
    sum=t=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%f",&buf[i].amount);
    }
    for(i=0;i<n;i++)
    {
        scanf("%f",&buf[i].price);
    }
    for(i=0;i<n;i++)
    {
        buf[i].avg=buf[i].price/buf[i].amount;
    }
    sort(buf,buf+n,cmp);
    for(i=0;i<n;i++)
    {if(buf[i].amount<=m){
        sum+=buf[i].price;}
        else
        {
            sum+=buf[i].avg*m;
            break;
        }
        m=m-buf[i].amount;
    }
    printf("%.2f",sum);
    return 0;
}
