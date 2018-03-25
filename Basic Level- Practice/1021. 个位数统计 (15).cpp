#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char s[1111];
    scanf("%s",s);
    int len,i,j,a[1111],b[1111],c[11];
    len=strlen(s);
    memset(b,0,sizeof(b));
    memset(c,-1,sizeof(c));
    for(i=0;i<len;i++)
    {
        a[i]=s[i]-'0';
    }
    sort(a,a+len);
    j=0;
    for(i=0;i<len;i++)
    {
        if(a[i]!=a[i+1])
        {
            c[j]=a[i];
            j++;
        }
    }
    for(i=0;i<len;i++)
    {
        b[a[i]]++;
    }
    for(i=0;i<j;i++)
    {
        printf("%d:%d\n",c[i],b[c[i]]);
    }
    return 0;
}
