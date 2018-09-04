#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
using namespace std;
const int maxn = 100010;
const int sqrn = 316;
stack<int> st;
int block[sqrn];
int table[maxn];
void peekMedian(int k) {
    int sum = 0;
    int idx = 0;
    while(sum + block[idx] < k) {
        sum += block[idx++];
    }
    int num = idx * sqrn;
    while(sum + table[num] < k) {
        sum += table[num++];
    }
    printf("%d\n", num);
}
void Push(int x) {
    st.push(x);
    block[x / sqrn]++;
    table[x]++;
}
void Pop() {
    int x = st.top();
    st.pop();
    block[x / sqrn]--;
    table[x]--;
    printf("%d\n", x);
}
int main() {
    int x, query;
    memset(block, 0, sizeof(block));
    memset(table, 0, sizeof(table));
    char cmd[20];
    scanf("%d", &query);
    for(int i = 0; i < query; i++) {
        scanf("%s", cmd);
        if(strcmp(cmd, "Push") == 0) {
            scanf("%d", &x);
            Push(x);
        } else if(strcmp(cmd, "Pop") == 0) {
            if(st.empty() == true) {
                printf("Invalid\n");
            } else {
                Pop();
            }
        } else {
            if(st.empty() == true) {
                printf("Invalid\n");
            } else {
                int k = st.size();
                if(k % 2 == 1) {
                    k = (k + 1) / 2;
                } else {
                    k = k / 2;
                }
                peekMedian(k);
            }
        }
    }
    return 0;
}
