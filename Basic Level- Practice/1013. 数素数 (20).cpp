#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isprime(int a)
{
    for(int i=2;i*i<=a;i++)
        if(a%i==0) return false;
    return true;
}
int main()
{
    int m,n,num=2,cnt=0;
    cin>>m>>n;
    vector<int> v;
    while(cnt<n){
        if(isprime(num)){
            cnt++;
            if(cnt>=m) v.push_back(num);
        }
        num++;
    }
    cnt=0;
    for(int i=0;i<v.size();i++){
        cnt++;
        if(cnt%10!=1) printf(" ");
        printf("%d",v[i]);
        if(cnt%10==0) printf("\n");
    }
    return 0;
}
