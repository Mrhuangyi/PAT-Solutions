#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include<queue>
using namespace std;
struct node {
    int x, y, z;
}Node;
int n, m, slice, t;
int pixel[1290][130][61];
bool inq[1290][130][61] = {false};
int X[6] = {0, 0, 0, 0, 1, -1};
int Y[6] = {0, 0, 1, -1, 0, 0};
int Z[6] = {1, -1, 0, 0, 0, 0};
bool judge(int x, int y, int z) {
    if(x >= n || x < 0 || y >= m || y < 0 || z >= slice || z < 0) {
        return false;
    }
    if(pixel[x][y][z] == 0 || inq[x][y][z] == true) {
        return false;
    }
    return true;
}
int bfs(int x, int y, int z) {
    int tot = 0;
    queue<node> q;
    Node.x = x, Node.y = y, Node.z = z;
    q.push(Node);
    inq[x][y][z] = true;
    while(!q.empty()) {
        node top = q.front();
        q.pop();
        tot++;
        for(int i = 0; i < 6; i++) {
            int newx = top.x + X[i];
            int newy = top.y + Y[i];
            int newz = top.z + Z[i];
            if(judge(newx, newy, newz)) {
                Node.x = newx;
                Node.y = newy;
                Node.z = newz;
                q.push(Node);
                inq[newx][newy][newz] = true;
            }
        }
    }
    if(tot >= t) {
        return tot;
    } else {
        return 0;
    }
}
int main()
{
    scanf("%d%d%d%d", &n, &m, &slice, &t);
    for(int z = 0; z < slice; z++) {
        for(int x = 0; x < n; x++) {
            for(int y = 0; y < m; y++) {
                scanf("%d", &pixel[x][y][z]);
            }
        }
    }
    int ans = 0;
    for(int z = 0; z < slice; z++) {
        for(int x = 0; x < n; x++) {
            for(int y = 0; y < m; y++) {
                if(pixel[x][y][z] == 1 && inq[x][y][z] == false) {
                    ans += bfs(x, y, z);
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
