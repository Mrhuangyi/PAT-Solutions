#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    char str[1001];
    scanf("%d",&n);
    int p=0,now=1,len=0;
    while(true){
        if(p||now/n){
            str[p++]='0'+now/n;
        }
        len++;
        now%=n;
        if(now==0)
        {
            str[p]=0;
            printf("%s %d\n",str,len);
            break;
        }
        now=now*10+1;
    }
    return 0;
}
