#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include<stack>
#include<queue>
using namespace std;
const int maxn = 100010;
const double inf = 1e12;
vector<int> node[maxn];
int n, num = 0;
double p, r, ans = inf;
void dfs(int index, int depth) {
    if(node[index].size() == 0) {
        double price = p * pow(1 + r, depth);
        if(price < ans) {
            ans = price;
            num = 1;
        } else if(price == ans) {
            num++;
        }
        return;
    }
    for(int i = 0; i < node[index].size(); i++) {
        dfs(node[index][i], depth + 1);
    }
}
int main()
{
    int k, child;
    scanf("%d%lf%lf", &n, &p, &r);
    r /= 100;
    for(int i = 0; i < n; i++) {
        scanf("%d", &k);
        if(k != 0) {
            for(int j = 0; j < k; j++) {
                scanf("%d", &child);
                node[i].push_back(child);
            }
        }
    }
    dfs(0, 0);
    printf("%.4f %d\n", ans, num);
    return 0;
}
