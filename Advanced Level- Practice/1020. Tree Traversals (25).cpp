#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;
const int maxn=50;
struct node{
    int data;
    node* lchild;
    node* rchild;
};
int pre[maxn],in[maxn],post[maxn];
int n;
node* create(int postl,int postr,int inl,int inr){
    if(postl>postr){
        return NULL;
    }
    node* root = new node;
    root->data=post[postr];
    int k;
    for(k=inl;k<=inr;k++){
        if(in[k]==post[postr]){
            break;
        }
    }
    int numLeft=k-inl;
    root->lchild=create(postl,postl+numLeft-1,inl,k-1);
    root->rchild=create(postl+numLeft,postr-1,k+1,inr);
    return root;
}
int num=0;
void bfs(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* now=q.front();
        q.pop();
        printf("%d",now->data);
        num++;
        if(num<n) printf(" ");
        if(now->lchild!=NULL) q.push(now->lchild);
        if(now->rchild!=NULL) q.push(now->rchild);
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&post[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&in[i]);
    }
    node* root=create(0,n-1,0,n-1);
    bfs(root);
    return 0;
}
