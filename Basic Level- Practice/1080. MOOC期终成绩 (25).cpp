#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
struct test{
    string name;
    int gradep,gradem,gradef,grade;
    test(){
    gradem=gradef=grade=-1;
    }
}a[30001];
bool cmp(test a,test b){
    if(a.grade==b.grade) return a.name<b.name;
    return a.grade>b.grade;
}
int main()
{
    int p,m,n,no=0;
    cin>>p>>m>>n;
    string name;
    int score;
    map<string,int> q;
    for(int i=0;i<p;i++){
        cin>>name>>score;
        if(score>=200&&score<=900){
            if(!q[name]) q[name]=++no,a[no].name=name;
            a[q[name]].gradep=score;
        }
    }
    for(int i=0;i<m;i++){
        cin>>name>>score;
        if(q[name]&&score>=0&&score<=100){
            a[q[name]].gradem=score;
        }
    }
    for(int i=0;i<n;i++){
        cin>>name>>score;
        if(q[name]&&score>=0&&score<=100){
            a[q[name]].gradef=score;
            if(a[q[name]].gradem<=a[q[name]].gradef)
                a[q[name]].grade=a[q[name]].gradef;
            else a[q[name]].grade=(int)(a[q[name]].gradef*0.6+a[q[name]].gradem*0.4+0.5);
        }
    }
    sort(a+1,a+no+1,cmp);
    for(int i=1;i<=no;i++){
        if(a[i].grade<60)break;
        cout<<a[i].name<<" "<<a[i].gradep<<" "<<a[i].gradem<<" "<<a[i].gradef<<" "<<a[i].grade<<endl;
    }
    return 0;
}
