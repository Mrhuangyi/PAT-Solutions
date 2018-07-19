#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
const int N = 1e5+11;
const int M = 1e6+11;
vector<int> vet[N];
int n;
int color[N];
int flag;
void solve(){
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < vet[i].size(); j++){
            int v = vet[i][j];
            if(color[i] == color[v]) {
                flag = 0;
            }
        }
    }
}
int main()
{
    int m,k;
    scanf("%d %d %d",&n,&m,&k);
    while(m--) {
        int a,b;
        scanf("%d %d",&a,&b);
        vet[a].push_back(b);
        vet[b].push_back(a);
    }
    int t;
    scanf("%d",&t);
    while(t--) {
        map<int,int> mp;
    int f = 1;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &color[i]);
        mp[color[i]] = 1;
    }
    if(mp.size() != k){
        printf("No\n");
    } else {
        flag = 1;
        solve();
        if(flag) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    }
    return 0;
}
