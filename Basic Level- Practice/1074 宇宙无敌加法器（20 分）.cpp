#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxm = 30;
int main()
{
    char ans[maxm],num1[maxm],num2[maxm],tmp1[maxm],tmp2[maxm],res[maxm];
    ans[0] = '0';
    scanf("%s",ans+1);
    scanf("%s",tmp1);
    scanf("%s",tmp2);
    int len =strlen(ans),i,j;
    for(i=0;i<len;i++){
        num1[i] = '0';
        num2[i] = '0';
        res[i] = '0';
    }
    i = len-1;
    for(j=strlen(tmp1)-1;j>=0;j--){
        num1[i--] = tmp1[j];
    }
    num1[len] = '\0';
    i = len-1;
    for(j=strlen(tmp2)-1;j>=0;j--){
        num2[i--] = tmp2[j];
    }
    num2[len] = '\0';
    int cur;
    int carry = 0;
    int jinzhi;
    for(i=len-1;i>=0;i--){
        if(ans[i]=='0'){
            jinzhi = 10;
        }else{
            jinzhi = ans[i]-'0';
        }
        cur = (num1[i]-'0')+(num2[i]-'0')+carry;
        if(cur<jinzhi){
            res[i] = cur+'0';
            carry = 0;
        }else{
            carry = 1;
            res[i] = cur-jinzhi+'0';
        }
    }
    for(i=0;i<len;i++){
        if(res[i]!='0'){
            break;
        }
    }
    if(i==len){
            printf("0");
        }else{
            for(;i<len;i++){
                printf("%c",res[i]);
            }
        }
    return 0;
}
