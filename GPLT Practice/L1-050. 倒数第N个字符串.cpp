#include<bits/stdc++.h>
using namespace std;
int f(int x){
    int sum=1;
    for(int i=0;i<x;i++){
        sum=sum*26;

    }
    return sum;
}
int main()
{
    int l,n;
    char a[10];
    scanf("%d %d",&l,&n);
    int ll=f(l);
    int x=ll-n,j=0;
    for(int i=l-1;i>=0;i--){
        a[j]=x/f(i)+'a';
        x=x%f(i);
        j++;
    }
    for(int i=0;i<l;i++)
        printf("%c",a[i]);
    return 0;
}
