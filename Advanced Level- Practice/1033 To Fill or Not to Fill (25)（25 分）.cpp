#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 510;
const int inf = 0x3f3f3f3f;
struct station {
    double price, dis;
}st[maxn];
bool cmp(station a, station b) {
    return a.dis < b.dis;
}
int main() {
    int n;
    double maxc, d, davg;
    scanf("%lf%lf%lf%d", &maxc, &d, &davg, &n);
    for(int i = 0; i < n; i++) {
        scanf("%lf%lf", &st[i].price, &st[i].dis);
    }
    st[n].price = 0;
    st[n].dis = d;
    sort(st, st + n, cmp);
    if(st[0].dis != 0) {
        printf("The maximum travel distance = 0.00\n");
    } else {
        int now = 0;
        double ans = 0, nowTank = 0, maxm = maxc * davg;
        while(now < n) {
            int k = -1;
            double minPrice = inf;
            for(int i = now + 1; i <= n && st[i].dis - st[now].dis <= maxm; i++) {
                if(st[i].price < minPrice) {
                    minPrice = st[i].price;
                    k = i;
                    if(minPrice < st[now].price) {
                        break;
                    }
                }
            }
            if(k == -1) {
                break;
            }
            double need = (st[k].dis - st[now].dis) / davg;
            if(minPrice < st[now].price) {
                if(nowTank < need) {
                    ans += (need - nowTank) * st[now].price;
                    nowTank = 0;
                } else {
                    nowTank -= need;
                }
            } else {
                ans += (maxc - nowTank) * st[now].price;
                nowTank = maxc - need;
            }
            now = k;
        }
        if(now == n) {
            printf("%.2f\n", ans);
        } else {
            printf("The maximum travel distance = %.2f\n", st[now].dis + maxm);
        }
    }
    return 0;
}
