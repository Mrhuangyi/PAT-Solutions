#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,t;
    char c;
    scanf("%d %c",&n,&c);
    if(n%2==0)
        t=n/2;
    else t=n/2+1;
     for(int j=0;j<n;j++)
        {
            printf("%c",c);
        }
        printf("\n");
    for(int i=1;i<t-1;i++)
    {
            printf("%c",c);
            for(int j=1;j<n-1;j++)
       {
           printf(" ");
       }
       printf("%c",c);
       printf("\n");

    }
       for(int j=0;j<n;j++)
        {
            printf("%c",c);
        }
        printf("\n");
    return 0;
}
