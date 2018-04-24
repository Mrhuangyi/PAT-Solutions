#include<stdio.h>
#include<string.h>
using namespace std;
typedef long long ll;
int main()
{
    int T,k;
    scanf("%d %d",&T,&k);
    int n1,b,t,n2;
    while(k--){
        scanf("%d %d %d %d",&n1,&b,&t,&n2);
        if(t>T&&T!=0){
            printf("Not enough tokens.  Total = %d.\n",T);
        }
        else{
        if((b==0&&n2<n1)||(b==1&&n2>n1)){
        T+=t;
        printf("Win %d!  Total = %d.\n",t,T);
        }
        else{
            T-=t;
            printf("Lose %d.  Total = %d.\n",t,T);
        }
        if(T==0){
            printf("Game Over.\n");
            break;
        }
        }
    }
    return 0;
}
