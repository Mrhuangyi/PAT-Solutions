#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
const int N = 54;
char mp[5] = {'S', 'H', 'C', 'D', 'J'};
int main()
{
    int k;
    int next[55], start[55], end[55];;
    scanf("%d", &k);
    for(int i = 1; i <= N; i++) {
        start[i] = i;
    }
    for(int i = 1;i <= N; i++) {
        scanf("%d", &next[i]);
    }
    for(int step = 0; step < k; step++) {
        for(int i = 1; i <= N; i++) {
            end[next[i]] = start[i];
        }
        for(int i = 1; i <= N; i++) {
            start[i] = end[i];
        }
    }
    for(int i = 1; i <= N; i++) {
        if(i != 1) {
            printf(" ");
        }
        start[i]--;
        printf("%c%d",mp[start[i] / 13], start[i] % 13 + 1);
    }
    return 0;
}
