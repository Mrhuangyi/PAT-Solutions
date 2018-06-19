#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
struct title{
    int fullScore,choiceNum,rightchoiceNum;
    int choice[5] = {0};
}s[111];
int mis[111][5],maxNum;
int main()
{
    int n,m,nn,rightNum,falseNum;
    int ti[5];
    double score;
    char ch;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d%d%d",&s[i].fullScore,&s[i].choiceNum,&s[i].rightchoiceNum);
        for(int j=0;j<s[i].rightchoiceNum;j++){
            scanf(" %c",&ch);
            s[i].choice[ch-'a'] = 1;
                    }
    }
    for(int i=0;i<n;i++){
        score = 0;
        for(int j=0;j<m;j++){
            rightNum = falseNum = 0;
            getchar();
            getchar();
            scanf("%d",&nn);
            memset(ti,0,sizeof(ti));
            for(int k=0;k<nn;k++){
                scanf(" %c",&ch);
                ti[ch-'a'] = 1;
                if(s[j].choice[ch-'a']){
                    rightNum++;
                }else{
                    falseNum++;
                    maxNum = max(maxNum,++mis[j][ch-'a']);
                }
            }
            getchar();
            if(!falseNum){
                if(rightNum==s[j].rightchoiceNum){
                    score+=s[j].fullScore;
                }else if(rightNum){
                    score += s[j].fullScore/2.0;
                }
            }
            for(int k=0;k<5;k++){
                if(s[j].choice[k]&&!ti[k]){
                    maxNum = max(maxNum,++mis[j][k]);
                }
            }

        }
          printf("%.1f\n",score);

    }
    if(maxNum==0){
            printf("Too simple\n");
        }else{
            for(int i=0;i<m;i++){
                for(int j=0;j<5;j++){
                    if(mis[i][j]==maxNum){
                        printf("%d %d-%c\n",maxNum,i+1,j+'a');
                    }
                }
            }
        }
    return 0;
}
