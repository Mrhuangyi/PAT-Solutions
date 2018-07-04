#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
using namespace std;
struct ListNode{
    int val;
    int next;
}a[100001];
int main()
{
    int s,n;
    scanf("%d%d",&s,&n);
    int address,data,nex;
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&address,&data,&nex);
        a[address].val = data;
        a[address].next = nex;
    }
    int cnt = 0;
    int res1[100005],res2[100005];
    while(s!=-1){//链表的值赋给res1
        res1[cnt++] = s;
        s = a[s].next;
    }
    int left = 0,right = cnt-1;
    int cnt2 = 0;
    while(left<=right){//模拟求出res2
        if(left==right){
            res2[cnt2++] = res1[right--];
        }else{
            res2[cnt2++] = res1[right--];
            res2[cnt2++] = res1[left++];
        }
    }
    for(int i=0;i<cnt-1;i++){
        printf("%05d %d %05d\n",res2[i],a[res2[i]].val,res2[i+1]);
    }
    printf("%05d %d -1\n",res2[cnt-1],a[res2[cnt-1]].val);
    return 0;
}
