#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long LL;
LL inf = (1LL << 63) - 1;
LL m[256];
void init() {
    for(char c = '0'; c <= '9'; c++) {
        m[c] = c - '0';
    }
    for(char c = 'a'; c <= 'z'; c++) {
        m[c] = c - 'a' + 10;
    }
}
LL convertTo10(char a[], LL radix, LL t) {
    LL ans = 0;
    int len = strlen(a);
    for(int i = 0; i < len; i++) {
        ans = ans * radix + m[a[i]];
        if(ans < 0 || ans > t) {
            return -1;
        }
    }
    return ans;
}
int cmp(char n2[], LL radix, LL t) {
    int len = strlen(n2);
    LL num = convertTo10(n2, radix, t);
    if(num < 0) {
        return 1;
    }
    if(t > num) {
        return -1;
    } else if(t == num) {
        return 0;
    } else {
        return 1;
    }
}
LL binarySearch(char n2[], LL left, LL right, LL t) {
    LL mid;
    while(left <= right) {
        mid = (left + right) / 2;
        int flag = cmp(n2, mid, t);
        if(flag == 0) {
            return mid;
        } else if(flag == -1) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int findLargest(char n2[]) {
    int ans = -1;
    int len = strlen(n2);
    for(int i = 0; i < len; i++) {
        if(m[n2[i]] > ans) {
            ans = m[n2[i]];
        }
    }
    return ans + 1;
}
int main() {
    char n1[20], n2[20], temp[20];
    int tag, radix;
    init();
    scanf("%s %s %d %d", n1, n2, &tag, &radix);
    if(tag == 2) {
        swap(n1, n2);
    }
    LL t = convertTo10(n1, radix, inf);
    LL low = findLargest(n2);
    LL high = max(low, t) + 1;
    LL ans = binarySearch(n2, low, high, t);
    if(ans == -1) {
        printf("Impossible\n");
    } else {
        printf("%lld\n", ans);
    }
    return 0;
}
