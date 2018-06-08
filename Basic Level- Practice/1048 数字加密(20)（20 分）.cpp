1048 数字加密(20)（20 分）
本题要求实现一种数字加密方法。首先固定一个加密用正整数A，对任一正整数B，将其每1位数字与A的对应位置上的数字进行以下运算：对奇数位，对应位的数字相加后对13取余——这里用J代表10、Q代表11、K代表12；对偶数位，用B的数字减去A的数字，若结果为负数，则再加10。这里令个位为第1位。

输入格式：

输入在一行中依次给出A和B，均为不超过100位的正整数，其间以空格分隔。

输出格式：

在一行中输出加密后的结果。

输入样例：

1234567 368782971
输出样例：

3695Q8118

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxm = 100;
char s1[maxm],s2[maxm],res[maxm];
int main()
{
    int a,b,m,len;
    scanf("%s %s",s1,s2);
    a=strlen(s1);
    b=strlen(s2);
    //补充前导0
    if(a>b){
        len=a;
        s2[len]='\0';
        for(int i=len-1;i>=a-b;i--){
            s2[i]=s2[i-a+b];
        }
        for(int i=0;i<a-b;i++){
            s2[i]='0';
        }
        }else{
            len=b;
            s1[len]='\0';
            for(int i=len-1;i>-b-a;i--){
                s1[i]=s1[i-b+a];
            }
            for(int i=0;i<b-a;i++){
                s1[i]='0';
            }
        }
        res[len]='\0';
        for(int i=1;i<=len;i++){
            if(i%2){
                m=(s1[len-i]-'0'+s2[len-i]-'0')%13;
                if(m==10)res[len-i]='J';
                else if(m==11)res[len-i]='Q';
                else if(m==12)res[len-i]='K';
                else res[len-i]=m+'0';
            }else{
                m=(s2[len-i]-s1[len-i]+10)%10;
                res[len-i]=m+'0';
            }
        }
    printf("%s",res);
    return 0;
}
