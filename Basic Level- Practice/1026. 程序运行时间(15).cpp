#include<stdio.h>
#define tck 100
int main()
{
    int c1,c2,h,m,s,c;
    scanf("%d%d",&c1,&c2);
    c=(c2-c1+50)/tck;
    h=c/3600;
    c=c%3600;
    m=c/60;
    s=c%60;
   printf("%02d:%02d:%02d", h, m, s);
    return 0;
}
