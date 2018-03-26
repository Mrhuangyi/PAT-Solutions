#include<iostream>
#include<cstdio>
using namespace std;
int a[100001]={0};
int main()
{
    int n,bianhao,score,max=0,j;
    cin>>n;
    while(n--){
        cin>>bianhao>>score;
        a[bianhao]+=score;
    }
    for(int i=0;i<100000;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            j=i;
        }
    }
    cout<<j<<" "<<max;
    return 0;
}
