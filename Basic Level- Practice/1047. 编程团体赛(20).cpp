#include<iostream>
#include<cstdio>
using namespace std;
int a[1001]={0};
int main()
{
    int n,num1,num2,grade;
    scanf("%d",&n);
    while(n--){
        scanf("%d-%d %d",&num1,&num2,&grade);
        a[num1]+=grade;
    }
    int max=0,j;
    for(int i=1;i<=1000;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            j=i;
        }
    }
    printf("%d %d\n",j,max);
    return 0;
}
