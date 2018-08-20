#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
const int maxn = 110;
struct node {
    int data;
    int lchild, rchild;
}Node[maxn];
int n, in[maxn], num = 0;
void inorder(int root) {
    if(root == -1) {
        return ;
    }
    inorder(Node[root].lchild);
    Node[root].data = in[num++];
    inorder(Node[root].rchild);
}
void bfs(int root) {
    queue<int> q;
    q.push(root);
    num = 0;
    while(!q.empty()) {
        int now = q.front();
        q.pop();
        printf("%d", Node[now].data);
        num++;
        if(num < n) {
            printf(" ");
        }
        if(Node[now].lchild != -1) {
            q.push(Node[now].lchild);
        }
        if(Node[now].rchild != -1) {
            q.push(Node[now].rchild);
        }
    }
}
int main() {
    int lchild, rchild;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d%d", &lchild, &rchild);
        Node[i].lchild = lchild;
        Node[i].rchild = rchild;
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &in[i]);
    }
    sort(in, in + n);
    inorder(0);
    bfs(0);
    return 0;
}
