#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 100005;
int data[maxn];
int list[maxn];
int main()
{
    int next[maxn];
    int first,k,n,temp,sum=0;
    scanf("%d%d%d",&first,&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        scanf("%d %d",&data[temp],&next[temp]);
    }
    while(first!=-1){
        list[sum++] = first;
        first = next[first];
    }
    for(int i=0;i<(sum-sum%k);i+=k){
      reverse(begin(list) + i, begin(list) + i + k);
    }
    for(int i=0;i<sum-1;i++){
        printf("%05d %d %05d\n",list[i],data[list[i]],list[i+1]);
    }
    printf("%05d %d -1",list[sum-1],data[list[sum-1]]);
    return 0;
}
