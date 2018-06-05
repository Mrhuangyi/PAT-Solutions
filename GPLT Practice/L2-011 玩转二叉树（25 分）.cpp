#include <iostream>  
#include <cstdio>  
#include <queue>  
using namespace std;  
const int maxn = 35;  
const int INF = 0x3f3f3f3f;  
struct node{  
    int l=-1,r=-1;  
}a[1000];
int n;
int mid[maxn],first[maxn];  
int rebuild(int la, int ra, int lb, int rb){///la是中序遍历  
    if(la > ra) return -1;    
    int rt = first[lb];  
    int i = 0;  
    while(mid[la+i] != rt) i++;  
    a[rt].r = rebuild(la+i+1,ra,lb+i+1,rb);  
    a[rt].l = rebuild(la,la+i-1,lb+1,lb+i);  
    return rt;  
}  
void bfs(int s){  
    queue<int> q;  
    q.push(s);  
    while(!q.empty()){  
        int now = q.front();  
        q.pop();  
        if(a[now].r != -1) q.push(a[now].r);  
        if(a[now].l != -1) q.push(a[now].l);  
        printf("%d",now);  
        if(!q.empty()) printf(" ");  
    }  
}  
  
int main()  
{  
    scanf("%d",&n);  
    for(int i = 0; i < n; ++i) scanf("%d",&mid[i]);  
    for(int i = 0; i < n; ++i) scanf("%d",&first[i]);  
    rebuild(0,n-1,0,n-1);  
    bfs(first[0]);  
    return 0;  
}  
