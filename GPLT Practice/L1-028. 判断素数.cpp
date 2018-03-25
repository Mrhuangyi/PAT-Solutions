#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,t;
    t=sqrt(n);
    if(n==1)
        return 0;
    else
    for(i=2;i<t;i++)
        if(n%i==0)
        return 0;
        return 1;
}
int main()
{
    int n,t;
    scanf("%d",&n);
    while(n--){
           scanf("%d",&t);
        if(prime(t)==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
