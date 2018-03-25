#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,sum,t;
    scanf("%d %d",&a,&b);
    sum=t=0;
    for(int i=a;i<=b;i++)
    {
        sum+=i;
        printf("%5d",i);
        t++;
        if(t%5==0&&i!=b)
        {
            printf("\n");
            t=0;
        }
    }
    printf("\n");
    printf("Sum = %d\n",sum);
    return 0;
}
