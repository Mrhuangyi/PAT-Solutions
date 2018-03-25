#include<stdio.h>
#include<string.h>
int main()
{
    int n;
 int a[7]={1,2,3,4,5,6,7};
 scanf("%d",&n);
 if(n>=1&&n<=5)
    printf("%d",a[n+1]);
 else if(n==6)
    printf("1");
 else
    printf("2");
 return 0;
}
