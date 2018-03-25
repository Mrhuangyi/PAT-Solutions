#include <stdio.h>
#include <stdlib.h>
#define MAXN 1000+1
char array[MAXN];

int main()
{
    char c;
    int i=0;
    int a[10] = {0};
    while(scanf("%c",&c)!= EOF){
        array[i] = c;
        i++;
    }//i 为数组中有内容的位数

    int j = 0;
    for(; j < i-1; j++){
        int temp = array[j]-'0';
        a[temp]++;
    }

    for(j = 0; j < 10; j++){
        if(a[j]==0) continue;
        printf("%d:%d\n",j,a[j]);
    }
    return 0;
}
