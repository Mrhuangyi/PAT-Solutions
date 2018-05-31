#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct X{
    int id,sum,num;
};
bool cmp(X a,X b){
    if(a.sum!=b.sum){
        return a.sum>b.sum;
    }else if(a.num!=b.num){
        return a.num>b.num;
    }else{
        return a.id<b.id;
    }
}
int main()
{
    int n,k,a,b;
    scanf("%d",&n);
    vector<X> v(n+1);
    for(int i=1;i<=n;i++){
        v[i].id = i;
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%d%d",&a,&b);
            v[a].sum+=b;
            v[a].num++;
            v[i].sum-=b;
        }
    }
    sort(v.begin()+1,v.end(),cmp);
    for(int i=1;i<=n;i++){
        double res = (double)(v[i].sum*1.0/100);
        printf("%d %.2f\n",v[i].id,res);
    }
    return 0;
}
