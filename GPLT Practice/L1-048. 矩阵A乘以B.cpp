#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int ra,ca,rb,cb;
    scanf("%d%d",&ra,&ca);
    int a[ra][ca];
    for(int i=0;i<ra;i++)
    {
        for(int j=0;j<ca;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&rb,&cb);
    int b[rb][cb];
    for(int i=0;i<rb;i++)
    {
        for(int j=0;j<cb;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(ca!=rb){
        printf("Error: %d != %d",ca,rb);
    }
    else{
            printf("%d %d\n",ra,cb);
        int c[ra][cb];
        for(int i=0;i<ra;i++){
            for(int j=0;j<cb;j++){
                int sum=0;
    for(int k=0;k<ca;k++){
        sum+=a[i][k]*b[k][j];
    }
    if(j<cb-1)
        printf("%d ",sum);
    else
        printf("%d\n",sum);
            }
        }
    }
    return 0;
}
