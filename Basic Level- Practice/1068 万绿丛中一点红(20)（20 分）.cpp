#include<iostream>
#include<cstdio>
#include<cmath>
#include<map>
using namespace std;
int graph[1005][1005] = {0};
int main()
{
    map<int,int> vis;
    int m,n,tol,x=-1,y=-1,cnt=0;
    scanf("%d%d%d",&m,&n,&tol);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&graph[i][j]);
            vis[graph[i][j]]++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[graph[i][j]]==1){
                 if (i - 1 >= 0 && j - 1 >= 0)//左上
                {
                    if (abs(graph[i][j] - graph[i - 1][j - 1]) <= tol)
                        continue;
                }
                if (i - 1 >= 0)              //上
                {
                    if (abs(graph[i][j] - graph[i - 1][j]) <= tol)
                        continue;
                }
                if (i - 1 >= 0 && j + 1 < m)  //右上
                {
                    if (abs(graph[i][j] - graph[i - 1][j + 1]) <= tol)
                        continue;
                }
                if (j + 1 < m)              //右
                {
                    if (abs(graph[i][j] - graph[i][j + 1]) <= tol)
                        continue;
                }
                if (i + 1 < n && j + 1 < m)//右下
                {
                    if (abs(graph[i][j] - graph[i + 1][j + 1]) <= tol)
                        continue;
                }
                if (i + 1 < n)              //下
                {
                    if (abs(graph[i][j] - graph[i + 1][j]) <= tol)
                        continue;
                }
                if (i + 1 < n && j - 1 >= 0)//左下
                {
                    if (abs(graph[i][j] - graph[i + 1][j - 1]) <= tol)
                        continue;
                }
                if (j - 1 >= 0)              //左
                {
                    if (abs(graph[i][j] - graph[i][j - 1]) <= tol)
                        continue;
                }
                x = i;
                y = j;
                ++cnt;
            }
        }
    }
    if(cnt==0){
        printf("Not Exist\n");
    }else if(cnt==1){
        printf("(%d, %d): %d",y+1,x+1,graph[x][y]);
    }else{
        printf("Not Unique\n");
    }
    return 0;
}
