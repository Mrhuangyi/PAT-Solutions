#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxm = 100005;
vector<int> child[maxm];
double val[maxm],z,r,sum;
void dfs(int id,double w){
    if(val[id]){
        sum = sum+w*val[id];
    }else{
        for(int i=0;i<child[id].size();i++){
            dfs(child[id][i],w*r);
        }
    }
}
int main()
{
    int n,m,k;
    memset(val,0,sizeof(val));
    sum = 0;
    scanf("%d %lf %lf",&n,&z,&r);
    r = (100-r)/100;
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        if(!m){
            scanf("%lf",&val[i]);
        }else{
            for(int j=0;j<m;j++){
                scanf("%d",&k);
                child[i].push_back(k);
            }
        }
    }
    dfs(0,z);
    printf("%d\n",(int)sum);
    return 0;
}
