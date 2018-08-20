#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
struct node {
    int v, height;
    node *lchild, *rchild;
}*root;
node* newnode(int v) {
    node* Node = new node;
    Node->v = v;
    Node->height = 1;
    Node->lchild = Node->rchild = NULL;
    return Node;
}
int getHeight(node* root) {
    if(root == NULL) {
        return 0;
    }
    return root->height;
}
void updatahegiht(node* root) {
    root->height = max(getHeight(root->lchild), getHeight(root->rchild)) + 1;
}
int getbalancefac(node* root) {
    return getHeight(root->lchild) - getHeight(root->rchild);
}
void L(node* &root) {
    node* temp = root->rchild;
    root->rchild = temp->lchild;
    temp->lchild = root;
    updatahegiht(root);
    updatahegiht(temp);
    root = temp;
}
void R(node* &root) {
    node* temp = root->lchild;
    root->lchild = temp->rchild;
    temp->rchild = root;
    updatahegiht(root);
    updatahegiht(temp);
    root = temp;
}
void insert(node* &root, int v) {
    if(root == NULL) {
        root = newnode(v);
        return ;
    }
    if(v < root->v) {
        insert(root->lchild, v);
        updatahegiht(root);
        if(getbalancefac(root) == 2) {
            if(getbalancefac(root->lchild) == 1) {
                R(root);
            } else if(getbalancefac(root->lchild) == -1) {
                L(root->lchild);
                R(root);
            }
        }
    } else {
        insert(root->rchild, v);
        updatahegiht(root);
        if(getbalancefac(root) == -2) {
            if(getbalancefac(root->rchild) == -1) {
                L(root);
            } else if(getbalancefac(root->rchild) == 1) {
                R(root->rchild);
                L(root);
            }
        }
    }
}
node* create(int data[], int n) {
    node* root = NULL;
    for(int i = 0; i < n; i++) {
        insert(root, data[i]);
    }
    return root;
}
int main() {
    int n, v;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v);
        insert(root, v);
    }
    printf("%d\n", root->v);
    return 0;
}
