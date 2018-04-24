#include<stdio.h>
#include<string.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    int year,month,day;
    char name[6],maxname[6],minname[6];
    ll maxAge=20140907,minAge=18140905;
    scanf("%d",&n);
    int Count=0;
    for(int i=0;i<n;i++){
        scanf("%s %d/%d/%d",name,&year,&month,&day);
        ll birth=year*10000+month*100+day;
        if(birth>=18140906&&birth<=20140906){
            Count++;
            if(birth<maxAge){
                strcpy(maxname,name);
                maxAge=birth;
            }
            if(birth>minAge){
                strcpy(minname,name);
                minAge=birth;
            }
        }
    }
    if(Count){
        printf("%d %s %s\n",Count,maxname,minname);
    }
    else{
        printf("0\n");
    }
    return 0;
}
