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
        temp = a[i]*p;
        for( j=cnt;j<n;j++){
            if(a[j]>temp){
                break;
            }
            if(j-i>=maxm){
        maxm = j-i+1;
        }
        }
        cnt = j;
    }
    printf("%d",maxm);
    return 0;
}
