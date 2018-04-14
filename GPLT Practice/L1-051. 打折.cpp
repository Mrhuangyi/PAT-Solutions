#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int a,b;
    double c;
    scanf("%d %d",&a,&b);
    c=double(a*b*10.0/100);
    printf("%.2lf",c);
    return 0;
}
