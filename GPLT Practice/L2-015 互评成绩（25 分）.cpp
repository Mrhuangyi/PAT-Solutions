#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(double a,double b){
    return a>b;
}
int main()
{
    int n,k,m;
    scanf("%d %d %d",&n,&k,&m);
    vector<double> sum;
    for(int i=0;i<n;i++){
        vector<double> v(k);
        double maxm=-1,minm=101,average=0.0;
        for(int j=0;j<k;j++){
            scanf("%lf",&v[j]);
            maxm=max(maxm,v[j]);
            minm=min(minm,v[j]);
            average+=v[j];
        }
        average=average-minm-maxm;
        average=average/(k-2);
        sum.push_back(average);
    }
    sort(sum.begin(),sum.end(),cmp);
    if(m!=0){
        printf("%.3f",sum[m-1]);
    }
    for(int i=m-2;i>=0;i--){
        printf("% .3f",sum[i]);
    }
    return 0;
}
