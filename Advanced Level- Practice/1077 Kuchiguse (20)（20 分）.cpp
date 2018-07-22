#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n, minLen = 256, ans = 0;
string s[256];
int main() {
    scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++) {
        getline(cin, s[i]);
        int len = s[i].size();
        if(len < minLen) {
            minLen = len;
        }
        reverse(s[i].begin(),s[i].end());
    }
    for(int i = 0; i < minLen; i++) {
        char c = s[0][i];
        bool same = true;
        for(int j = 0; j < n; j++) {
            if(c != s[j][i]) {
                same = false;
                break;
            }
        }
        if(same) {
            ans++;
        } else {
            break;
        }
    }
    if(ans) {
        for(int i = ans - 1; i >= 0; i--) {
            printf("%c", s[0][i]);
        }
    } else {
        printf("nai");
    }
    return 0;
}
