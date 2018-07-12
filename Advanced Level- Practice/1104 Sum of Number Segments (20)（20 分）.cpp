#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    double a[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%lf",&a[i]);
        sum+=(i+1)*a[i]*(n-i);
    }
    printf("%.2lf",sum);
    return 0;
}
