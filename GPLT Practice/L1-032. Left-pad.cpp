#include <stdio.h>  
#include <string.h>  
  
int main()  
{  
    int N,i,lenth;  
    char c;  
    char a[40000];  
    scanf("%d %c",&N,&c);  
    getchar();  
    gets(a);  
    lenth = strlen(a);  
    if(lenth >= N)  
    {  
        for(i=lenth-N;i<lenth;i++)  
        {  
            putchar(a[i]);  
        }  
    }  
    else  
    {  
        for(i=0;i<N-lenth;i++)  
        {  
            putchar(c);  
        }  
        puts(a);  
    }  
    return 0;  
}  
