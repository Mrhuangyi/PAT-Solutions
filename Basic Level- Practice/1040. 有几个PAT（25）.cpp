#include<cstdio>
#include<cstring>
const int maxn = 100010;
const int mod = 1000000007;
char str[maxn];
int leftnump[maxn] ={0};
int main()
{
    gets(str);
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        if(i>0)
        {
            leftnump[i]=leftnump[i-1];
        }
        if(str[i]=='P'){
            leftnump[i]++;
        }
    }
    int ans =0,rightnumt=0;
    for(int i=len-1;i>=0;i--){
        if(str[i]=='T'){
            rightnumt++;
        }
        else if(str[i]=='A'){
            ans = (ans+leftnump[i]*rightnumt)%mod;
        }
    }
    printf("%d\n",ans);
    return 0;
}
