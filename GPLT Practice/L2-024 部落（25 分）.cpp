#include<cstdio>
#include<iostream>
#include<set>
using namespace std;
int F[10000];
int Find(int x){
    int r = x;
    while(r != F[r]) {
        r = F[r];
    }
    int i = x, j;
    while(i != r) {
        j = F[i];
        F[i] = r;
        i = j;
    }
    return r;
}
void Union(int x, int y){
    int fa = Find(x);
    int fb = Find(y);
    if(fa != fb) {
        F[fa] = fb;
    }
}
int main()
{
    set<int> s;
    for(int i = 1; i <= 10000; i++) {
        F[i] = i;
    }
    int n;
    scanf("%d", &n);
    int m,k;
    for(int i = 0; i < n; i++) {
        scanf("%d", &m);
        int pre;
        for(int j = 0; j < m; j++){
            scanf("%d", &k);
            if(j == 0) {
                pre = k;
            } else {
                Union(pre,k);
                pre = k;
            }
            s.insert(k);
        }
    }
    int sum = 0;
    for(int i = 1; i <= s.size(); i++){
        if(F[i] == i) {
            sum++;
        }
    }
    printf("%d %d\n",s.size(),sum);
    int t;
    scanf("%d",&t);
    int x, y;
    for(int i = 0; i < t; i++) {
        scanf("%d %d", &x, &y);
        if(Find(x) == Find(y)) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}
