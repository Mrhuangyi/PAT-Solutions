#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

bool cmp(int a,int b){
    return a<b;
}
int main()
{
    int n;
    scanf("%d",&n);
    int *a = new int[n];
    int *b = new int[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int i,j;
    for(i=0;i<n-1&&b[i]<=b[i+1];i++);
    for(j=i+1;a[j]==b[j]&&j<n;j++);
    if(j==n){
        printf("Insertion Sort\n");
        sort(a,a+i+2,cmp);
    }else{
        printf("Merge Sort\n");
        int k=1,flag=1;
        while(flag){
            flag=0;
            for(i=0;i<n;i++){
                if(a[i]!=b[i]){
                    flag=1;
                }
            }
            k=k*2;
            for(i=0;i<n/k;i++)
                sort(a+i*k,a+(i+1)*k,cmp);
            sort(a+n/k*k,a+n,cmp);
        }

    }
      for(j=0;j<n-1;j++){
            printf("%d ",a[j]);
        }
        printf("%d",a[n-1]);
        delete []a;
        delete []b;
        return 0;
}
