#include<stdio.h>
#include<string.h>
char a[100000],b[1000000];
int main()
{
    int da,db;
    scanf("%s%d%s%d",a,&da,b,&db);
    int n,m,t1,t2,i,j,y,x,sum1,sum2,sum;
    n=strlen(a);
    m=strlen(b);
    t1=t2=sum1=sum2=sum=0;
    for(i=0;i<=n;i++)
    {
        if(a[i]-'0'==da)
            t1++;
    }
    for(j=0;j<=m;j++)
    {
        if(b[j]-'0'==db)
            t2++;
    }
  if(t1==0&&t2==0)
    printf("0");
  else{
    while(t1--){
        sum1+=da;
        da*=10;
    }
    while(t2--)
    {
        sum2+=db;
        db*=10;
    }
    printf("%d",sum1+sum2);
  }
    return 0;
}
