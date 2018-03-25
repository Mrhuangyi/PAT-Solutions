#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    int x,y;
    x=y=0;
 scanf("%d",&n);
 while(n--){
    scanf("%d",&m);
    if(m%2==1)
        x++;
    else
        y++;
 }
 printf("%d %d",x,y);
 return 0;
}
