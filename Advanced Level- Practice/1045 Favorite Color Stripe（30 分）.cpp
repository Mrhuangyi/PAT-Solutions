#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
const int maxc = 210;
const int maxn = 10010;
int hashtable[maxc];
int a[maxn], dp[maxn];
int main() {
    int n, m, x;
    scanf("%d%d", &n, &m);
    memset(hashtable, -1, sizeof(hashtable));
    for(int i = 0; i < m; i++) {
        scanf("%d", &x);
        hashtable[x] = i;
    }
    int L, num = 0;
    scanf("%d", &L);
    for(int i = 0; i < L; i++) {
        scanf("%d", &x);
        if(hashtable[x] >= 0) {
            a[num++] = hashtable[x];
        }
    }
    int ans = -1;
    for(int i = 0; i < num; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if(a[j] <= a[i] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
        ans = max(ans, dp[i]);
    }
    printf("%d\n", ans);
    return 0;
}
