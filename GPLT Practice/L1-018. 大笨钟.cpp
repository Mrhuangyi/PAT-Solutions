#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int a,b;
    scanf("%d:%d",&a,&b);
    if(a<12||(a==12&&b==0)){
            if(a<10&&b>10)
        printf("Only 0%d:%d.  Too early to Dang.\n",a,b);
            if(a<10&&b<10)
        printf("Only 0%d:0%d.  Too early to Dang.\n",a,b);
            if(a>10&&b<10)
        printf("Only %d:0%d.  Too early to Dang.\n",a,b);
            if(a>10&&b>10)
        printf("Only %d:%d.  Too early to Dang.\n",a,b);
    }
    else
    {
        int x;
        if(b==00)
        {
            for(int i=0;i<a-12;i++)
                cout<<"Dang";
        }
        else
        {
            for(int i=0;i<a-11;i++)
                cout<<"Dang";
        }
    }
    return 0;
}
