#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,d;
    double e;
    scanf("%d %lf %d",&n,&e,&d);
    int k,sum1=0,cnt1=0,cnt2=0;
    double e2;
    double t = n;
    while(n--){
    scanf("%d",&k);
    sum1=0;
    for(int i=0;i<k;i++){
        scanf("%lf",&e2);
        if(e2<e){
            sum1++;
        }
    }
    if(k<=d&&sum1>k/2){
        cnt1++;
    }
    if(k>d&&sum1>k/2){
        cnt2++;
    }
    }
    printf("%.1f%% %.1f%%",cnt1/t*100.0,cnt2/t*100.0);
    return 0;
}
