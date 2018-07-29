#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn = 1000001;
const int inf = 0x7fffffff;
int s1[maxn], s2[maxn];
int main() {
    int n, m;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &s1[i]);
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &s2[i]);
    }
    s1[n] = s2[m] = inf;
    int mid = (n + m - 1) / 2;
    int i = 0, j = 0, count = 0;
    while(count < mid) {
        if(s1[i] < s2[j]) {
            i++;
        } else {
            j++;
        }
        count++;
    }
    if(s1[i] < s2[j]) {
        printf("%d\n", s1[i]);
    } else {
        printf("%d\n", s2[j]);
    }
    return 0;
}
