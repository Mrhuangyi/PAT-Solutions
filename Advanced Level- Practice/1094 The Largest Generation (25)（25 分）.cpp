#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include<stack>
#include<queue>
using namespace std;
const int maxn = 110;
vector<int> node[maxn];
int hashTable[maxn] = {0};
void dfs(int index, int level) {
    hashTable[level]++;
    for(int j = 0; j < node[index].size(); j++) {
        dfs(node[index][j], level + 1);
    }
}
int main()
{
    int n, m, parent, k, child;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < m; i++) {
        scanf("%d%d", &parent, &k);
        for(int j = 0; j < k; j++) {
            scanf("%d", &child);
            node[parent].push_back(child);
        }
    }
    dfs(1, 1);
    int maxLevel = -1, maxValue = 0;
    for(int i = 1; i < maxn; i++) {
        if(hashTable[i] > maxValue) {
            maxValue = hashTable[i];
            maxLevel = i;
        }
    }
    printf("%d %d\n", maxValue, maxLevel);
    return 0;
}
