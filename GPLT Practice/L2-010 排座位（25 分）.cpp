#include<cstdio>
#include<vector>
using namespace std;
vector<int> friendd;
int enemy[111][111];
int findfriend(int x){
    while(x!=friendd[x]){
        x = friendd[x];

    }
    return x;
}
void Union(int a,int b){
    int frienda = findfriend(a);
    int friendb = findfriend(b);
    if(frienda!=friendb){
        friendd[frienda] = friendb;
    }
}
int main(){
   int n,m,k,a,b,c;
    scanf("%d %d %d",&n,&m,&k);
    friendd.resize(n+1);
    for(int i=1;i<=n;i++){
        friendd[i] = i;
    }
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(c==1){
            Union(a,b);
        }else{
            enemy[a][b] = 1;
            enemy[b][a] = 1;
        }
    }
    for(int i=0;i<k;i++){
        scanf("%d %d",&a,&b);
        if(findfriend(a)==findfriend(b)&&enemy[a][b]==0){
            printf("No problem\n");
        }else if(findfriend(a)!=findfriend(b)&&enemy[a][b]==0){
            printf("OK\n");
        }else if(findfriend(a)==findfriend(b)&&enemy[a][b]==1){
            printf("OK but...\n");
        }else if(enemy[a][b]==1){
            printf("No way\n");
        }
    }
    return 0;
}
