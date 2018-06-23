#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxm = 550;
int edge[maxm][maxm];
int visit[maxm],n;
void dfs(int x){
    visit[x] = 1;
    for(int i=0;i<n;i++){
        if(!visit[i]&&edge[x][i]){
            dfs(i);
        }
    }
}
int Calcnt(){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(!visit[i]){
            dfs(i);
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int m;
    scanf("%d%d",&n,&m);
    memset(edge,0,sizeof(edge));
    memset(visit,0,sizeof(visit));
    for(int i=0;i<m;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        edge[a][b] = 1;
        edge[b][a] = 1;
    }
    int cntt = Calcnt();
    int k,city;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        scanf("%d",&city);
        for(int j=0;j<n;j++){
            if(edge[city][j]){
                edge[city][j] = 0;
                edge[j][city] = 0;
            }
        }
        memset(visit,0,sizeof(visit));
        int temp = Calcnt();
        if(temp>cntt+1){
            printf("Red Alert: City %d is lost!\n",city);
        }else{
            printf("City %d is lost.\n",city);
        }
        cntt = temp;
    }
    if(k==n){
        printf("Game Over.\n");
    }
    return 0;
}
