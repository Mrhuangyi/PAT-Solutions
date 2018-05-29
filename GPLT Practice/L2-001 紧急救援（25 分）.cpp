#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxv = 510;
const int inf = 0x3fffffff;
int n,m,st,ed,G[maxv][maxv],weight[maxv];
int d[maxv],w[maxv],num[maxv],pre[510];
bool vis[maxv]={false};
void printpath(int v){
    if(v==st){
        printf("%d",v);
        return;
    }
    printpath(pre[v]);
    printf(" %d",v);
}
void Dijstra(int s){
    fill(d,d+maxv,inf);
    memset(num,0,sizeof(num));
    memset(w,0,sizeof(w));
    d[s]=0;
    w[s]=weight[s];
    num[s]=1;
    for(int i=0;i<n;i++){
        int u=-1,minm=inf;
        for(int j=0;j<n;j++){
            if(vis[j]==false&&d[j]<minm){
                u=j;
                minm=d[j];
            }
        }
        if(u==-1){
            return ;
        }
        vis[u]=true;
        for(int v=0;v<n;v++){
            if(vis[v]==false&&G[u][v]!=inf){
                if(d[u]+G[u][v]<d[v]){
                    d[v]=d[u]+G[u][v];
                    w[v]=w[u]+weight[v];
                    num[v]=num[u];
                    pre[v]=u;
                }else if(d[u]+G[u][v]==d[v]){
                if(w[u]+weight[v]>w[v]){
                    w[v]=w[u]+weight[v];
                    pre[v]=u;
                }
                num[v]+=num[u];
                }
            }
        }
    }
}
int main()
{
    scanf("%d%d%d%d",&n,&m,&st,&ed);
    for(int i=0;i<n;i++){
        scanf("%d",&weight[i]);
    }
    int u,v;
    fill(G[0],G[0]+maxv*maxv,inf);
    for(int i=0;i<m;i++){
        scanf("%d%d",&u,&v);
        scanf("%d",&G[u][v]);
        G[v][u]=G[u][v];
    }
    Dijstra(st);
    printf("%d %d\n",num[ed],w[ed]);
    printpath(ed);
    return 0;
}
