#include<stdio.h>
int main()
{
    int n,t,m,a,i;
    scanf("%d",&n);
    if(n>=100){
        t=n/100;
       n=n%100;
       m=n/10;
       a=n%10;
       while(t--){printf("B");}
       while(m--){printf("S");}
       for(i=1;i<=a;i++){printf("%d",i);}
}
else if(n<100&&n>=10)
{
    t=n/10;
    a=n%10;
    while(t--){printf("S");}
    for(i=1;i<=a;i++){printf("%d",i);}
}
else if(n<10)
{
    for(i=1;i<=n;i++){printf("%d",i);}
}
return 0;
}
