#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    scanf("%d",&n);
    getchar();
    char s[1001],a[101][101];
    gets(s);
    int len=strlen(s),t=0;
    m=(len+n-1)/n;
    for(int j=m-1;j>=0;j--)
    {
        for(int i=0;i<n;i++)
        {
            if(t<len) a[i][j]=s[t++];
            else
                a[i][j]=' ';
        }
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
            printf("%c",a[j][i]);
        printf("\n");
    }
    return 0;
}
