#include<stdio.h>
#include<string.h>
int main()
{
    char a[111];
    int i,len,x,j,b[100];
    gets(a);
    memset(b,0,sizeof(b));
    len=strlen(a);
    j=0;
    for(i=len-1;i>=0;i--)
    {
        if(a[i]==' '){
            b[j]=i;
            j++;
        }
    }
    x=j-1;
    if(j==0)
    {
        printf("%s",a);
    }
    else{
   for(i=b[0]+1;i<=len-1;i++)
    {
        printf("%c",a[i]);
    }
    printf(" ");
    j=1;
    while(j<=x)
    {
        for(i=b[j]+1;;i++){
            printf("%c",a[i]);
            if(a[i+1]==' ')
               break;
            }
            printf(" ");
            j++;
    }
    for(i=0;i<b[x];i++)
    {
        printf("%c",a[i]);
    }
    }
    return 0;
}
