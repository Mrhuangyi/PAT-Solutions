#include<stdio.h>
#include<string.h>
int main()
{
   char a[10000];
   int s[1000];
   scanf("%s",a);
   int len,i,sum,j,t;
   len=strlen(a);
   j=sum=0;
   for(i=0;i<len;i++){
    sum+=a[i]-'0';
   }
   while(sum!=0){
        j++;
    t=sum%10;
    sum=sum/10;
    s[j]=t;

   }
   for(i=j;i>=1;i--){
        if(i>1){
    if(s[i]==1)
        printf("yi ");
    else if(s[i]==2)
        printf("er ");
    else if(s[i]==3)
        printf("san ");
    else if(s[i]==4)
        printf("si ");
    else if(s[i]==5)
        printf("wu ");
    else if(s[i]==6)
        printf("liu ");
    else if(s[i]==7)
        printf("qi ");
    else if(s[i]==8)
        printf("ba ");
    else if(s[i]==9)
        printf("jiu ");
        else if(s[i]==0)
            printf("ling ");
        }
        if(i==1)
        {
           if(s[i]==1)
        printf("yi");
    else if(s[i]==2)
        printf("er");
    else if(s[i]==3)
        printf("san");
    else if(s[i]==4)
        printf("si");
    else if(s[i]==5)
        printf("wu");
    else if(s[i]==6)
        printf("liu");
    else if(s[i]==7)
        printf("qi");
    else if(s[i]==8)
        printf("ba");
    else if(s[i]==9)
        printf("jiu");
        else if(s[i]==0)
            printf("ling");
        }

   }
    return 0;
}
