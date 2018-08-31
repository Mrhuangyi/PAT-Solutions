#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn = 100010;
vector<int> G[maxn];
bool isRoot[maxn];
int father[maxn];
int findFather(int x) {
    int a = x;
    while(x != father[x]) {
        x = father[x];
    }
    while(a != father[a]) {
        int z = a;
        a = father[a];
        father[z] = x;
    }
    return x;
}
void Union(int a, int b) {
    int faA = findFather(a);
    int faB = findFather(b);
    if(faA != faB) {
        father[faA] = faB;
    }
}
void init(int n) {
    for(int i = 1; i <= n; i++) {
        father[i] = i;
    }
}
int blockCnt(int n) {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        isRoot[findFather(i)] = true;
    }
    for(int i = 1; i <= n; i++) {
        cnt += isRoot[i];
    }
    return cnt;
}
int maxH = 0;
vector<int> temp, ans;
void dfs(int u, int height, int pre) {
    if(height > maxH) {
        temp.clear();
        temp.push_back(u);
        maxH = height;
    } else if(height == maxH) {
        temp.push_back(u);
    }
    for(int i = 0; i < G[u].size(); i++) {
        if(G[u][i] == pre) {
            continue;
        }
        dfs(G[u][i], height + 1, u);
    }
}
int main() {
    int a, b, n;
    scanf("%d", &n);
    init(n);
    for(int i = 1; i < n; i++) {
        scanf("%d%d", &a, &b);
        G[a].push_back(b);
        G[b].push_back(a);
        Union(a, b);
    }
    int block = blockCnt(n);
    if(block != 1) {
        printf("Error: %d components\n", block);
    } else {
        dfs(1, 1, -1);
        ans = temp;
        dfs(ans[0], 1, -1);
        for(int i = 0; i < temp.size(); i++) {
            ans.push_back(temp[i]);
        }
        sort(ans.begin(), ans.end());
        printf("%d\n", ans[0]);
        for(int i = 1; i < ans.size(); i++) {
            if(ans[i] != ans[i - 1]) {
                printf("%d\n", ans[i]);
            }
        }
    }
    return 0;
}
