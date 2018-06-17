#include<iostream>
#include<set>
#include<cstdio>
using namespace std;

int cal(int num){
    int res = 0;
    while(num){
        int t = num%10;
        res += t;
        num = num/10;
    }
    return res;
}
int main()
{
    int n,x;
    set<int> result;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        result.insert(cal(x));
    }
    set<int>::iterator it;
    printf("%d\n",result.size());
    for(it=result.begin();it!=result.end();it++){
        if(it==result.begin()){
            printf("%d",*it);
        }else{
            printf(" %d",*it);
        }
    }
    return 0;
}
