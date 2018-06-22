#include<iostream>
#include<cstdio>
#include<set>
#include<algorithm>
#include<cstring>
using namespace std;
struct people{
    char name[11];
    int cnt,num;
}a[1111];
bool cmp(people a,people b){
    if(a.cnt!=b.cnt){
        return a.cnt>b.cnt;
    }
    return a.num<b.num;
}
int main(){
    int k,n,x;
    scanf("%d",&n);
    set<int> s;
    for(int i=0;i<n;i++){
        scanf("%s",a[i].name);
        scanf("%d",&k);
        s.clear();
        for(int j=0;j<k;j++){
            scanf("%d",&x);
            s.insert(x);
        }
        a[i].cnt = s.size();
        a[i].num = k;
    }
    sort(a,a+n,cmp);
    bool flag = false;
    for(int i=0;i<min(n,3);i++){
        if(flag){
            printf(" ");
        }
        flag = true;
        printf("%s",a[i].name);
    }
    for(int i=n;i<3;i++){
        if(flag){
            printf(" ");
        }
        printf("-");
    }
    return 0;
}
