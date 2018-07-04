#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct student{
    string name;
    int score,rank;
}a[10001];
bool cmp(student s1,student s2){
    if(s1.score!=s2.score){
        return s1.score>s2.score;
    }
    return s1.name<s2.name;
}
int main()
{
    int n,g,k,sum = 0;
    scanf("%d%d%d",&n,&g,&k);
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].score;
    }
    sort(a,a+n,cmp);
    int rank = 1;
    for(int i=0;i<n;i++){
        if(a[i].score>=g){
            sum += 50;
        }
        if(a[i].score>=60&&a[i].score<g){
            sum += 20;
        }
        if(a[i].score==a[i-1].score){
            a[i].rank = a[i-1].rank;
        }else{
            a[i].rank = rank;
        }
        rank++;
    }
    printf("%d\n",sum);
    for(int i=0;i<n;i++){
        if(a[i].rank>k){
            break;
        }
        printf("%d %s %d\n",a[i].rank,a[i].name.c_str(),a[i].score);

    }
    return 0;
}
