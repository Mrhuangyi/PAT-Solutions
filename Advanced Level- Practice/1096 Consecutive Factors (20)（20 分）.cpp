#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
typedef long long LL;
int main() {
    LL n;
    scanf("%lld", &n);
    LL sqr = (LL)sqrt(1.0 * n), first = 0, maxLen = 0;
    for(LL i = 2; i <= sqr; i++) {
        LL temp = 1, j = i;
        while(1) {
            temp *= j;
            if(n % temp != 0) {
                break;
            }
            if(j - i + 1 > maxLen) {
                first = i;
                maxLen = j - i + 1;
            }
            j++;
        }
    }
    if(maxLen == 0) {
        printf("1\n%lld", n);
    } else {
        printf("%lld\n", maxLen);
        for(LL i = 0; i < maxLen; i++) {
            printf("%lld", first + i);
            if(i < maxLen - 1) {
                printf("*");
            }
        }
    }
    return 0;
}
