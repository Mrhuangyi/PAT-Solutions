#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
struct node{
    string name;
    int height;
}inf[100000];
int n,k;
bool cmp(struct node a,struct node b){
    if(a.height!=b.height){
        return a.height>b.height;
    }
    return a.name<b.name;
}
void print(int index,int n){
    int a[n];
    a[n/2] = index;
    int left = n/2-1,right = n/2+1,i = index+1;
    while(left>=0||right<n){
        if(left>=0){
            a[left--] = i++;
        }
        if(right<n){
            a[right++] = i++;
        }
    }
    for(int i=0;i<n;i++){
         cout << inf[a[i]].name;
        if(i+1<n){
            printf(" ");
        }
    }
    printf("\n");
}
void solve(){
    sort(inf,inf+n,cmp);
    print(0,n/k+n%k);
    for(int i=n/k+n%k;i<n;i+=n/k){
        print(i,n/k);
    }
}
int main(){
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        cin >> inf[i].name >> inf[i].height;
    }
    solve();
    return 0;
}
