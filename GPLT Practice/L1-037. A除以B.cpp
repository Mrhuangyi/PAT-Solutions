#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float x;
    x=1.0*a/b;
    if(b>0)
        printf("%d/%d=%.2f",a,b,x);
    if(b==0)
        printf("%d/%d=Error",a,b);
    if(b<0)
        printf("%d/(%d)=%.2f",a,b,x);
    return 0;
}
