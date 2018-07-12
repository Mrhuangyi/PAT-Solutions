#include<iostream>
#include<set>
#include<cstdio>
using namespace std;
const int maxm = 100005;
int main()
{
    int n,m,man,woman,table[maxm]={-1},List[maxm]={0},guest[10005]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&man,&woman);
        table[man] = woman;
        table[woman] = man;
    }
    scanf("%d",&m);
    set<int> s;
    for(int i=0;i<m;i++){
        scanf("%d",&guest[i]);
        if(table[guest[i]]!=-1){
            List[table[guest[i]]] = 1;
        }
    }
    for(int i=0;i<m;i++){
        if(!List[guest[i]]){
            s.insert(guest[i]);
        }
    }
    printf("%d\n",s.size());
    for(set<int>::iterator it = s.begin();it!=s.end();it++){
        if(it!=s.begin()){
            printf(" ");
        }
        printf("%05d",*it);
    }
    return 0;
}
