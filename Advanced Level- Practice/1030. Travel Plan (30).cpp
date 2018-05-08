#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxv=510;
const int inf = 0x3ffffff;
int n,m,st,ed,G[maxv][maxv],cost[maxv][maxv];
int d[maxv],c[maxv],pre[maxv];
bool vis[maxv]={false};
void Dijstra(int s){
    fill(d,d+maxv,inf);
    fill(c,c+maxv,inf);
    for(int i=0;i<n;i++){
        pre[i]=i;
    }
    d[s]=0;
    c[s]=0;
    for(int i=0;i<n;i++){
        int u=-1,minm=inf;
        for(int j=0;j<n;j++){
            if(vis[j]==false&&d[j]<minm){
                u=j;
                minm=d[j];
            }
        }
        if(u==-1) return ;
        vis[u]=true;
        for(int v=0;v<n;v++){
            if(vis[v]==false&&G[u][v]!=inf){
                if(d[u]+G[u][v]<d[v]){
                    d[v]=d[u]+G[u][v];
                    c[v]=c[u]+cost[u][v];
                    pre[v]=u;
                }else if(d[u]+G[u][v]==d[v]){
                if(c[u]+cost[u][v]<c[v]){
                    c[v]=c[u]+cost[u][v];
                    pre[v]=u;
                }
                }
            }
        }
    }
}
void DFS(int v){
if(v==st){
    printf("%d ",v);
    return;
}
DFS(pre[v]);
printf("%d ",v);
}
int main()
{
    scanf("%d%d%d%d",&n,&m,&st,&ed);
    int u,v;
    fill(G[0],G[0]+maxv*maxv,inf);
    for(int i=0;i<m;i++){
        scanf("%d%d",&u,&v);
        scanf("%d%d",&G[u][v],&cost[u][v]);
        G[v][u]=G[u][v];
        cost[v][u]=cost[u][v];
    }
    Dijstra(st);
    DFS(ed);
    printf("%d %d\n",d[ed],c[ed]);
    return 0;
}
