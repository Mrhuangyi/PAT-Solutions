#include<cstdio>
#include<vector>>
#include<iostream>
using namespace std;
int main()
{
    vector<int> a;
    int x,t=0,flag=1;
    while(flag)
    {
        scanf("%d",&x);
        t++;
        if(x==250){
            printf("%d\n",t);
            break;
        }
    }
    return 0;
}
