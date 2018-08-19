#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include<stack>
#include<queue>
using namespace std;
const int maxn = 1010;
int n, number[maxn], cbt[maxn], index = 0;
void inorder(int root) {
    if(root > n) {
        return ;
    }
    inorder(root * 2);
    cbt[root] = number[index++];
    inorder(root * 2 + 1);
}
int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &number[i]);
    }
    sort(number, number + n);
    inorder(1);
    for(int i = 1; i <= n; i++) {
        printf("%d", cbt[i]);
        if(i < n) {
            printf(" ");
        }
    }
    return 0;
}
