#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
using namespace std;
struct pat{
    float score;
    int num;
    string name;
}school;
bool cmp(pat a,pat b){
    if(a.score!=b.score)
        return a.score>b.score;
    else if(a.num!=b.num)
        return a.num<b.num;
    return a.name<b.name;
}
int main()
{
    int n,x=1;
    cin>>n;
    map<string,int> m;
    vector<pat>v;
    for(int i=0;i<n;i++){
        string s,s1;
        float score1;
        cin>>s>>score1>>s1;
        for(int i=0;i<s1.length();i++){
            if(s1[i]>='A'&&s1[i]<='Z')
                s1[i]=s1[i]+'a'-'A';
        }
        if(!m[s1]){
            m[s1]=x;
            x++;
            pat q;
            q.name=s1;
            q.score=0;
            q.num=0;
            v.push_back(q);
        }
        int y=m[s1]-1;
        if(s[0]=='B')
            score1/=1.5;
        if(s[0]=='T')
            score1*=1.5;
        v[y].score+=score1;
        v[y].num++;
    }
    for(int i=0;i<v.size();i++){
        v[i].score=(int)v[i].score;
    }
    sort(v.begin(),v.end(),cmp);
    cout<<v.size()<<"\n";
    x=1;
    for(int k=0;k<v.size();k++){
        if(k!=0&&v[k].score==v[k-1].score)
            cout<<x;
        else{
            cout<<k+1;
            x=k+1;
        }
       cout<<" "<<v[k].name<<" "<<v[k].score<<" "<<v[k].num<<"\n";
    }
    return 0;
}
