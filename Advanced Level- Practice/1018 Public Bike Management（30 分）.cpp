#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
const int maxv = 510;
const int inf = 1000000000;
int n, m, cmax, sp, numpath = 0, G[maxv][maxv], weight[maxv];
int d[maxv], minneed = inf, minremain = inf;
bool vis[maxv] = {false};
vector<int> pre[maxv];
vector<int> temppath, path;
void Dijkstra(int s) {
    fill(d, d + maxv, inf);
    d[s] = 0;
    for(int i = 0; i <= n; i++) {
        int u = -1, minm = inf;
        for(int j = 0; j <= n; j++) {
            if(vis[j] == false && d[j] < minm) {
                u = j;
                minm = d[j];
            }
        }
        if(u == -1) {
            return ;
        }
        vis[u] = true;
        for(int v = 0; v <= n; v++) {
            if(vis[v] == false && G[u][v] != inf) {
                if(d[u] + G[u][v] < d[v]) {
                    d[v] = d[u] + G[u][v];
                    pre[v].clear();
                    pre[v].push_back(u);
                } else if(d[u] + G[u][v] == d[v]) {
                    pre[v].push_back(u);
                }
            }
        }
    }
}
void dfs(int v) {
    if(v == 0) {
        temppath.push_back(v);
        int need = 0, remain = 0;
        for(int i = temppath.size() - 1; i >= 0; i--) {
            int id = temppath[i];
            if(weight[id] > 0) {
                remain += weight[id];
            } else {
                if(remain > abs(weight[id])) {
                    remain -= abs(weight[id]);
                } else {
                    need += abs(weight[id]) - remain;
                    remain = 0;
                }
            }
        }
        if(need < minneed) {
            minneed = need;
            minremain = remain;
            path = temppath;
        } else if(need = minneed && remain < minremain){
            minremain = remain;
            path = temppath;
        }
        temppath.pop_back();
        return;
    }
    temppath.push_back(v);
    for(int i = 0; i < pre[v].size(); i++) {
        dfs(pre[v][i]);
    }
    temppath.pop_back();
}
int main() {
    scanf("%d%d%d%d", &cmax, &n, &sp, &m);
    int u, v;
    fill(G[0], G[0] + maxv * maxv, inf);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &weight[i]);
        weight[i] -= cmax / 2;
    }
    for(int i = 0; i < m; i++) {
        scanf("%d%d", &u, &v);
        scanf("%d", &G[u][v]);
        G[v][u] = G[u][v];
    }
    Dijkstra(0);
    dfs(sp);
    printf("%d ", minneed);
    for(int i = path.size() - 1; i >= 0; i--) {
        printf("%d", path[i]);
        if(i > 0) {
            printf("->");
        }
    }
    printf(" %d", minremain);
    return 0;
}
