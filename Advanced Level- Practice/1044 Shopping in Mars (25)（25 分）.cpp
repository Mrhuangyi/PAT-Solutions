#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn = 100010;
int sum[maxn];
int n, s, nears = 100000010;
/*
int upper_bound(int& l, int& r, int x) {
    int mid;
    int left = l, right = r;
    while(left < right) {
        mid = (left + right) / 2;
        if(sum[mid] > x) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}
*/
int main() {
    scanf("%d%d", &n, &s);
    sum[0] = 0;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &sum[i]);
        sum[i] += sum[i - 1];
    }
    for(int i = 1; i <= n; i++) {
        int j = upper_bound(sum + i, sum + n + 1, sum[i - 1] + s) - sum;
        if(sum[j - 1] - sum[i - 1] == s) {
            nears = s;
            break;
        } else if(j <= n && sum[j] - sum[i - 1] < nears) {
            nears = sum[j] - sum[i - 1];
        }
    }
    for(int i = 1; i <= n; i++) {
        int j = upper_bound(sum + i, sum + n + 1, sum[i - 1] + nears) - sum;
        if(sum[j - 1] - sum[i - 1] == nears) {
            printf("%d-%d\n", i, j - 1);
        }
    }
    return 0;
}
