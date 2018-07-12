#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxm = 100010;
int a[maxm],b[maxm],c[maxm];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    int max = 0,d = 0;
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max = a[i];
        }
        if(a[i]==b[i]&&a[i]==max){
            c[d++] = a[i];
        }
    }
    printf("%d\n",d);
    for(int i=0;i<d;i++){
        if(i==0){
            printf("%d",c[i]);
        }else{
            printf(" %d",c[i]);
        }
    }
    printf("\n");
    return 0;
}
