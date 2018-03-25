#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    t=0;
    while(n!=1){
        if(n%2==0)
            n=n/2;
        else
            n=(3*n+1)/2;
        t++;
    }
    printf("%d",t);
    return 0;
}
