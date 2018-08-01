#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn = 40010;
const int maxm = 26*26*26*10;
vector<int> seleclCourse[maxm];
int getID(char name[]) {
    int id = 0;
    for(int i = 0; i < 3; i++) {
        id = id * 26 + (name[i] - 'A');
    }
    id = id * 10 + (name[3] - '0');
    return id;
}
int main() {
    char name[5];
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < k; i++) {
        int course, x;
        scanf("%d%d", &course, &x);
        for(int j = 0; j < x; j++) {
            scanf("%s", name);
            int id = getID(name);
            seleclCourse[id].push_back(course);
        }
    }
    for(int i = 0; i < n; i++) {
        scanf("%s", name);
        int id = getID(name);
        sort(seleclCourse[id].begin(), seleclCourse[id].end());
        printf("%s %d", name, seleclCourse[id].size());
        for(int j = 0; j < seleclCourse[id].size(); j++) {
            printf(" %d", seleclCourse[id][j]);
        }
        printf("\n");
    }
    return 0;
}
