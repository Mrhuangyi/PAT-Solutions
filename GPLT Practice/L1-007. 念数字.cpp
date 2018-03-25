#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("fu ");
        n=-n;
    }
    int t=n,mask=1;
    while(t>9)
    {
        t/=10;
        mask*=10;
    }
 char *s[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int d;
    while(mask>0){
        d=n/mask;
        printf("%s",s[d]);
        if(mask>9){
            printf(" ");
        }
        n%=mask;
        mask/=10;
    }
    return 0;
}
