#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,jiahan,jiahua,yihan,yihua;
    int jia=0,yi=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d%d",&jiahan,&jiahua,&yihan,&yihua);
        t=jiahan+yihan;
        if(t==jiahua&&t!=yihua)
        {
            yi++;
        }
        else if(t!=jiahua&&t==yihua){
            jia++;
        }
        else {
            continue;
        }
    }
    printf("%d %d\n",jia,yi);
    return 0;
}
