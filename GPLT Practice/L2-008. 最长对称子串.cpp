#include<cstdio>
#include<cstring>
int dp[1002][1002];
char s[1002];
int main()
{
    gets(s);
    int len=strlen(s),maxm=1;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<len;i++)
        dp[i][i] = dp[i+1][i] =1;
    for(int i=1;i<=len;i++)
    {
        for(int j=0;j+i<len;j++){
            if(s[j]==s[j+i]&&dp[j+1][j+i-1]){
                dp[j][j+i]=1;
                if(i+1>maxm)
                    maxm=i+1;
            }
        }
    }
    printf("%d\n",maxm);
    return 0;
}
