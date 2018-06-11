#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    float maxm = 0;
    for(int i=0;i<n;i++){
        float a,b,ans;
        scanf("%f%f",&a,&b);
        ans = sqrt(a*a+b*b);
        if(ans>maxm){
            maxm = ans;
        }
    }
    printf("%.2f",maxm);
    return 0;
}
