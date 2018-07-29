#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 100010;
int a[maxn], b[maxn];
int main() {
    int n, m;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j;
    long long ans = 0;
    while(i < n && i < m && a[i] < 0 && b[i] < 0) {
        ans += a[i] * b[i];
        i++;
    }
    i = n - 1;
    j = m - 1;
    while(i >= 0 && j >= 0 && a[i] > 0 && b[j] > 0) {
        ans += a[i] * b[j];
        i--;
        j--;
    }
    printf("%lld\n", ans);
    return 0;
}
