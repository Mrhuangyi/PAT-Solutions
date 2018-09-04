#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
const int maxNode = 1111;
int n, m, k, query, q;
int convertToMinute(int h, int m) {
    return h * 60 + m;
}
struct Window {
    int endTime, popTime;
    queue<int> q;
}window[20];
int ans[maxNode], needTime[maxNode];

int main() {
    int inIndex = 0;
    scanf("%d%d%d%d", &n, &m, &k, &query);
    for(int i = 0; i < k; i++) {
        scanf("%d", &needTime[i]);
    }
    for(int i = 0; i < n; i++) {
        window[i].popTime = window[i].endTime = convertToMinute(8, 0);
    }
    for(int i = 0; i < min(n * m, k); i++) {
        window[inIndex % n].q.push(inIndex);
        window[inIndex % n].endTime += needTime[inIndex];
        if(inIndex < n) {
            window[inIndex].popTime = needTime[inIndex];
        }
        ans[inIndex] = window[inIndex % n].endTime;
        inIndex++;
    }
    for(; inIndex < k; inIndex++) {
        int idx = -1, minPopTime = 1 << 30;
        for(int i = 0; i < n; i++) {
            if(window[i].popTime < minPopTime) {
                idx = i;
                minPopTime = window[i].popTime;
            }
        }
        window[idx].q.pop();
        window[idx].q.push(inIndex);
        window[idx].endTime += needTime[inIndex];
        window[idx].popTime += needTime[window[idx].q.front()];
        ans[inIndex] = window[idx].endTime;
    }
    for(int i = 0; i < query; i++) {
        scanf("%d", &q);
        if(ans[q - 1] - needTime[q - 1] >= convertToMinute(17, 0)) {
            printf("Sorry\n");
        } else {
            printf("%02d:%02d\n", ans[q - 1] / 60, ans[q - 1] % 60);
        }
    }
    return 0;
}
