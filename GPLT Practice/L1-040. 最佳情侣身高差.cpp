#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    float x,y;
    char c;
    while(N--)
    {
getchar();
        scanf("%c%f",&c,&x);
        if(c=='M')
            printf("%.2f\n",x/1.09);
        if(c=='F')
            printf("%.2f\n",x*1.09);
    }
    return 0;
}
