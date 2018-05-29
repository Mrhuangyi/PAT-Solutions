#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 1e5;
struct Node{
    int address;
    int key;
    int next;
    int num;
}node[maxn];
bool vis[maxn];
bool cmp(Node a,Node b){
    return a.num<b.num;
}
int main()
{
    int head,n,a;
    scanf("%d%d",&head,&n);
    int k1=0,k2=0;
    for(int i=0;i<maxn;i++){
        node[i].num=2*maxn;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        scanf("%d%d",&node[a].key,&node[a].next);
        node[a].address=a;
             }
    for(int i=head;i!=-1;i=node[i].next){
        if(!vis[abs(node[i].key)]){
            vis[abs(node[i].key)]=true;
            node[i].num=k1;
            k1++;
        }else{
            node[i].num=maxn+k2;
            k2++;
        }
    }
    sort(node,node+maxn,cmp);
    int k=k1+k2;
    for(int i=0;i<k;i++){
        if(i!=k1-1&&i!=k-1){
            printf("%05d %d %05d\n",node[i].address,node[i].key,node[i+1].address);
        }else{
            printf("%05d %d -1\n",node[i].address,node[i].key);
        }
    }
    return 0;
}
