#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,bianhao,cnt,number,count1=0,count2=0;
    map<int,int> q;
    string name;
    vector<int> p;
    cin>>n>>m;
    while(m--){
        cin>>bianhao;
        q[bianhao]=1;

    }
    while(n--){
            int tag=0;
        cin>>name>>cnt;
        while(cnt--){
            cin>>number;
            if(q[number]==1){
                tag=1;
                count1++;
                p.push_back(number);
            }
        }
    if(tag){
             int x=p.size();
            count2++;
        cout<<name<<":";
        for(int i =0;i<p.size();i++){
            printf(" %04d",p[i]);
        }
        printf("\n");
        p.clear();
    }
    }
    cout<<count2<<" "<<count1;
    return 0;
}
