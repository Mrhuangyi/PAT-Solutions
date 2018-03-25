#include<stdio.h>
int main()
{
   int a,b;
   bool isfirst=true;
   while(~scanf("%d %d",&a,&b))
   {
       if(b==0)
        break;
       if(!isfirst)
        printf(" ");
       else
        isfirst=false;
       printf("%d %d",a*b,b-1);
   }
   if(isfirst)
    printf("0 0");
   return 0;
}
