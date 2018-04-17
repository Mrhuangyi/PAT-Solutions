#include<iostream>
#include<cstdio>
using namespace std;
int check(const char *str)
{
    int sum=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            sum=sum*10+str[i]-'0';
        else
            return -1;
    }
    if(sum>=1&&sum<=1000)
        return sum;
    else
        return -1;
}
int main()
{
    char a[10000],b[10000];
    int n,m;
    scanf("%s ",&a);
    gets(b);
    n=check(a);
    m=check(b);
    if(n==-1)
        printf("? + ");
    else
        printf("%d + ",n);
    if(m==-1)
        printf("? = ");
    else
        printf("%d = ",m);
    if(n==-1||m==-1)
        printf("?\n");
    else
        printf("%d\n",n+m);
    return 0;
}
