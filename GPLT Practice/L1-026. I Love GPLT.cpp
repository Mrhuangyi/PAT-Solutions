#include<stdio.h>
#include<string.h>
int main()
{
   int n,i;
   char a[]={"I Love GPLT"};
   n=strlen(a);
   for(i=0;i<n;i++)
   {
       printf("%c\n",a[i]);
   }
   return 0;
}
