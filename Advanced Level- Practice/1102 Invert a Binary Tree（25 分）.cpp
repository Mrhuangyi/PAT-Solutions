#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include<stack>
#include<queue>
using namespace std;
const int maxn = 110;
struct node {
    int lchild, rchild;
}Node[maxn];
bool notRoot[maxn] = {false};
int n, num = 0;
void print(int id) {
    printf("%d", id);
    num++;
    if(num < n) {
        printf(" ");
    } else {
        printf("\n");
    }
}
void inorder(int root) {
    if(root == -1) {
        return ;
    }
    inorder(Node[root].lchild);
    print(root);
    inorder(Node[root].rchild);
}
void bfs(int root) {
    queue<int> q;
    q.push(root);
    while(!q.empty()) {
        int now = q.front();
        q.pop();
        print(now);
        if(Node[now].lchild != -1) {
            q.push(Node[now].lchild);
        }
        if(Node[now].rchild != -1) {
            q.push(Node[now].rchild);
        }
    }
}
void postorder(int root) {
    if(root == -1) {
        return ;
    }
    postorder(Node[root].lchild);
    postorder(Node[root].rchild);
    swap(Node[root].lchild, Node[root].rchild);
}
int strTonum(char c) {
    if(c == '-') {
        return -1;
    } else {
        notRoot[c - '0'] = true;
        return c - '0';
    }
}
int findRoot() {
    for(int i = 0; i < n; i++) {
        if(notRoot[i] == false) {
            return i;
        }
    }
}
int main()
{
    char lchild, rchild;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
            getchar();
        scanf("%c %c", &lchild, &rchild);
        Node[i].lchild = strTonum(lchild);
        Node[i].rchild = strTonum(rchild);
    }
    int root = findRoot();
    postorder(root);
    bfs(root);
    num = 0;
    inorder(root);
    return 0;
}
