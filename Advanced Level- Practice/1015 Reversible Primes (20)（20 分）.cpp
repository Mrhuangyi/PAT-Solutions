#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
bool isPrime(int n) {
    if(n <= 1) {
        return false;
    }
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
int d[111];
int main() {
    int n, radix;
    while(~scanf("%d", &n)) {
        if(n < 0) {
            break;
        }
        scanf("%d", &radix);
        if(isPrime(n) == false) {
            printf("No\n");
        } else {
            int len = 0;
            do {
               d[len++] = n % radix;
               n /= radix;
            } while(n != 0);
            for(int i = 0; i < len; i++) {
                n = n * radix + d[i];
            }
            if(isPrime(n) == true) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
    }
    return 0;
}
