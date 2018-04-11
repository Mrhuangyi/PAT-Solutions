#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,a[11],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i)
                sum+=a[i]*10+a[j];
        }
    }
    printf("%d",sum);
    return 0;
}
