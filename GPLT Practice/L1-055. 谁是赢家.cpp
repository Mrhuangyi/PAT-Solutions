#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int pa,pb;
    int x,a=0,b=0;
    scanf("%d %d",&pa,&pb);
    for(int i=0;i<3;i++){
        scanf("%d",&x);
        if(x==0){
            a++;
        }
        else{
            b++;
        }
    }
    if(pa>pb&&a!=0){
        printf("The winner is a: %d + %d\n",pa,a);
    }
    else if(pa<pb&&b!=0){
        printf("The winner is b: %d + %d\n",pb,b);
    }
    else if(pa<pb&&a==3){
         printf("The winner is a: %d + %d\n",pa,a);
    }
    else if(pb<pa&&b==3){
        printf("The winner is b: %d + %d\n",pb,b);
    }
    return 0;
}
