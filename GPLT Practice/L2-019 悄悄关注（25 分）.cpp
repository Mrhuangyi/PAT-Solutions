#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
using namespace std;
int main()
{
    int n,m,k,t,sum = 0;
    string s;
    scanf("%d",&n);
    map<string,int> m1,m2;
    for(int i=0;i<n;i++){
        cin>>s;
        m1[s] = 1;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        cin>>s>>k;
        m2[s] = k;
        sum += k;
    }
    t = sum/m;
    int flag = 0;
    map<string,int>::iterator it;
    for(it=m2.begin();it!=m2.end();it++){
        if(it->second>t&&m1[it->first]==0){
          cout<<it->first<<endl;
            flag = 1;
        }
    }
    if(flag==0){
        printf("Bing Mei You\n");
    }
    return 0;
}
