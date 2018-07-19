#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<vector>
#include<cstring>
using namespace std;
int strToint(string s){
    if(s == "-0"){
        return 2000;
    }
    if(s == "0"){
        return 2001;
    }
    return stoi(s)+1000;
}
void print(int x){
    if(x == 2000){
        printf("-0");
    }else if(x == 2001){
        printf("0");
    }else{
        printf("%d",x-1000);
    }
}
bool isSameSex(int x,int y){
    if(x < 1000 && (y < 1000 || y == 2000)){
        return true;
    }
    if(x > 1000 && (y > 1000 && y != 2000)){
        return true;
    }
    return false;
}
double friends[2005][2005];
vector<int> photo[1005];
int n,m,k,id,a,b;
string str1,str2;
bool cmp1(int x,int y){
    if(friends[a][x] != friends[a][y]){
        return friends[a][x] > friends[a][y];
    }else{
        if(x == 2000 || x == 2001){
            x = 0;
        }else{
            x -= 1000;
        }
        if(y == 2000 || y == 2001){
            y = 0;
        }else{
            y -= 1000;
        }
        return abs(x) < abs(y);
    }
}
bool cmp2(int x,int y){
    if(friends[b][x] != friends[b][y]){
        return friends[b][x] > friends[b][y];
    }else{
        if(x == 2000 || x == 2001){
            x = 0;
        }else{
            x -= 1000;
        }
        if(y == 2000 || y == 2001){
            y = 0;
        }else{
            y -= 1000;
        }
         return abs(x) < abs(y);
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    memset(friends,0,sizeof(friends));
    for(int i = 0; i < m; i++){
        scanf("%d",&k);
        for(int j = 0; j < k; j++){
            cin>>str1;
            id = strToint(str1);
            photo[i].push_back(id);
        }
    }
    cin>>str1>>str2;
    a = strToint(str1);
    b = strToint(str2);
    vector<int> fa;
    vector<int> fb;
    double maxa = 0.0;
    double maxb = 0.0;
    for(int i = 0; i < m; i++){
        if(find(photo[i].begin(), photo[i].end(), a) != photo[i].end()){
            for(int j = 0; j < photo[i].size(); j++){
                if(photo[i][j] == a){
                    continue;
                }
                if(isSameSex(a, photo[i][j])){
                    continue;
                }
                friends[a][photo[i][j]] += (1.0/photo[i].size());
                maxa = max(friends[a][photo[i][j]], maxa);
                if(find(fa.begin(),fa.end(),photo[i][j]) != fa.end()){
                    continue;
                }
                fa.push_back(photo[i][j]);
            }
        }
        if(find(photo[i].begin(), photo[i].end(), b) != photo[i].end()){
            for(int j = 0; j < photo[i].size(); j++){
                if(photo[i][j] == b){
                    continue;
                }
                if(isSameSex(b, photo[i][j])){
                    continue;
                }
                friends[b][photo[i][j]] += (1.0/photo[i].size());
                maxb = max(friends[b][photo[i][j]], maxb);
                if(find(fb.begin(),fb.end(),photo[i][j]) != fb.end()){
                    continue;
                }
                fb.push_back(photo[i][j]);
            }
        }
    }
    sort(fa.begin(), fa.end(), cmp1);
    sort(fb.begin(), fb.end(), cmp2);
    if(friends[a][b] == maxa && friends[b][a] == maxb) {
        print(a);
        printf(" ");
        print(b);
        printf("\n");
        return 0;
    }
    for(int i = 0; i < fa.size(); i++){
        if(friends[a][fa[i]] < maxa){
            break;
        }
        print(a);
        printf(" ");
        print(fa[i]);
        printf("\n");
    }
    for(int i = 0;i < fb.size(); i++){
        if(friends[b][fb[i]] < maxb){
            break;
        }
        print(b);
        printf(" ");
        print(fb[i]);
        printf("\n");
    }
    return 0;
}
