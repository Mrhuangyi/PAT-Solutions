#include<cstdio>
#include<set>
using namespace std;
set<int> s[55];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int m,x;
        scanf("%d",&m);
        while(m--){
            scanf("%d",&x);
            s[i].insert(x);
        }
    }
    int k,a,b;
    scanf("%d",&k);
    while(k--){
        scanf("%d%d",&a,&b);
        int cnta=s[a].size(),cntb=s[b].size(),cnt=0;
        for(set<int>::iterator it=s[a].begin();it!=s[a].end();++it){
            if(s[b].find(*it)!=s[b].end()){
                cnt++;
            }

        }
         printf("%.2lf%\n",cnt*1.0/(cnta+cntb-cnt)*100);
    }
    return 0;
}
