#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cctype>
using namespace std;
int n;
void solve(){
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int x=sqrt(n),m;
    while(n%x){
        x--;
    }
    m=n/x;
    int t[m][x];
    for(int side=0,k=n-1;side*2<x;side++){
        for(int j=side;j<x-side;j++){
            t[side][j]=a[k--];
        }
        for(int i=side+1;i<m-side;i++){
            t[i][x-1-side]=a[k--];
        }
        for(int j=x-2-side;j>=side;j--){
            t[m-1-side][j]=a[k--];
        }
        if(x-1-side>side){
            for(int i=m-2-side;i>=side+1;i--){
                t[i][side]=a[k--];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<x;j++){
            printf("%d",t[i][j]);
            if(j+1<x){
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){
    scanf("%d",&n);
    solve();
    return 0;
}
