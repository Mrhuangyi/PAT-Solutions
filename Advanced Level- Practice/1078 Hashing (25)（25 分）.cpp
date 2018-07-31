#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn = 11111;
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
bool hashTable[maxn] = {0};
int main() {
    int n, tsize, a;
    scanf("%d%d", &tsize, &n);
    while(isPrime(tsize) == false) {
        tsize++;
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        int m = a % tsize;
        if(hashTable[m] == false) {
            hashTable[m] = true;
            if(i == 0) {
                printf("%d", m);
            } else {
                printf(" %d", m);
            }
        } else {
            int step;
            for(step = 1; step < tsize; step++) {
                m = (a + step * step) % tsize;
                if(hashTable[m] == false) {
                    hashTable[m] = true;
                    if(i == 0) {
                        printf("%d", m);
                    } else {
                        printf(" %d", m);
                    }
                    break;
                }
            }
            if(step >= tsize) {
                if(i > 0) {
                    printf(" ");
                }
                printf("-");
            }
        }
    }
    return 0;
}
