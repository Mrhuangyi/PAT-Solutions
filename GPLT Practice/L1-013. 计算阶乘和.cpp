#include<stdio.h>
int jie(int n){
    int i,t;
    t=1;
   for(i=1;i<=n;i++){
    t*=i;
}
return t;
}
int main()
{
   int i,n,sum;
   sum=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       sum+=jie(i);
   }
   printf("%d",sum);
    return 0;
}
