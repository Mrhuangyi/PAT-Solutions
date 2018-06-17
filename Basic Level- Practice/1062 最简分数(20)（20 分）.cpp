#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main()
{
    vector<int> ans;
    int n1,m1,n2,m2,k;
    scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
    if(n1*m2>n2*m1){
        int tmpn,tmpm;
        tmpn = n1;
        tmpm = m1;
        n1 = n2;
        m1 = m2;
        n2 = tmpn;
        m2 = tmpm;
    }
    for(int i=1;i<k;i++){
        if(i*m1>k*n1&&i*m2<k*n2&&gcd(k,i)==1){
            ans.push_back(i);
        }
    }
    bool flag = false;
    for(int i=0;i<ans.size();i++){
        if(flag){
            printf(" ");
        }
        flag = true;
        printf("%d/%d",ans[i],k);
    }
    return 0;
}
