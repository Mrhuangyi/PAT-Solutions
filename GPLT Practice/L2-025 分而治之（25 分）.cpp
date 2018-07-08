#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
const int maxm = 10010;
struct node{
    int x;
    int y;
}edge[maxm];
int v[maxm];
int main()
{
    int n,m,k,t,x,y,city,l,p,flag;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&edge[i].x,&edge[i].y);
    }
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        map<int,int> m2;
        scanf("%d",&t);
        for(int j=0;j<t;j++){
            scanf("%d",&city);
            m2[city] = 1;
        }
        int j = 0;
        for(j=0;j<m;j++){
            if(m2[edge[j].x]!=1&&m2[edge[j].y]!=1){
                printf("NO\n");
                break;
            }
        }
        if(j>=m){
            printf("YES\n");
        }
    }
    return 0;
}
