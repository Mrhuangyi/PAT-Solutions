#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;
const int maxm = 10010;
const int inf = 99999999;
int a[maxm],cnt;
void creat(int x){
    a[++cnt] = x;
    int t = cnt;
    while(t>1&&(a[t/2]>a[t])){
        a[t] = a[t/2];
        a[t/2] = x;
        t /= 2;
    }
    a[t] = x;

}
int main()
{
    int n,m,x,y;
    string s;
    map<int,int> p;
    scanf("%d%d",&n,&m);
    cnt = 0;
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        creat(x);
    }
    for(int i=1;i<=n;i++){
        p[a[i]] = i;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        cin>>s;
        if(s[0]=='a'){
            scanf("%d",&y);
            getline(cin,s);
            if(p[x]/2==p[y]/2){
                printf("T\n");
            }else{
            printf("F\n");
            }
        }else{
        cin>>s;
        cin>>s;
        if(s[0]=='r'){
            if(p[x]==1){
                printf("T\n");
            }else{
            printf("F\n");
            }
        }else if(s[0]=='p'){
            cin>>s;
            cin>>y;
            if(p[x]==p[y]/2){
                printf("T\n");
            }else{
            printf("F\n");
            }
        }else{
            cin>>s;
            cin>>y;
            if(p[x]/2==p[y]){
                printf("T\n");
            }else{
            printf("F\n");
            }
        }
        }
    }
    return 0;
}
