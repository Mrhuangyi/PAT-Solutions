#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
double a[100100];
int main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    for(int i=0;i<n;i++){
        scanf("%lf",&a[i]);
    }
    int i,j,maxm = 0,cnt = 0;
    sort(a,a+n);
    double temp;
    for( i=0;i<n;i++){
        temp = a[i]*p;//遍历，将a[i]作为最小数
        for( j=cnt;j<n;j++){
            if(a[j]>temp){//如果不满足条件了，则将下一个元素最为最小值
                break;
            }
            if(j-i>=maxm){//如果此次的长度大于上一次，更新数列长度
        maxm = j-i+1;
        }
        }
        cnt = j;
    }
    printf("%d",maxm);
    return 0;
}
