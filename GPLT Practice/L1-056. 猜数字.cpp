#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
struct E{
char name[11];
int num;
}a[10001];
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s%d",a[i].name,&a[i].num);
        sum+=a[i].num;
    }
    int avg=(sum/n)/2,minm=11111,tag;
    for(int i=0;i<n;i++){
        if(abs(avg-a[i].num)<minm){
            minm=abs(avg-a[i].num);
            tag=i;
        }
    }
    printf("%d %s\n",avg,a[tag].name);
    return 0;
}
