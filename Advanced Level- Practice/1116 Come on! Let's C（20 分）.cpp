#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int a[10001]={0};
bool b[10001]={false};
int main(){
    int n,k,x,y;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%04d",&x);
        a[x]=i;
    }
    scanf("%d",&k);
    while(k--){
        scanf("%04d",&y);
        if(b[y]){
            printf("%04d: Checked\n",y);
            continue;
        }
        if(a[y]==1){
            printf("%04d: Mystery Award\n",y);
            b[y]=true;
        }
        if(isPrime(a[y])){
            printf("%04d: Minion\n",y);
            b[y]=true;
        }
        if(a[y]!=1&&!isPrime(a[y])&&a[y]!=0){
            printf("%04d: Chocolate\n",y);
            b[y]=true;
        }
        if(a[y]==0){
            printf("%04d: Are you kidding?\n",y);
        }
    }
    return 0;
}
