#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<map>
using namespace std;

int main()
{
    int m,n,start;
    string s;
    map<string,int> count;
    cin>>m>>n>>start;
    vector<string> v;
    v.push_back(" ");
    for(int i=0;i<m;i++){
        cin>>s;
        v.push_back(s);
    }
    if(start>m){
        cout<<"Keep going..."<<endl;
    }
    else {
        for(int i=start;i<=m;i+=n){
            while(count[v[i]]>=1){
                i++;
            }
            count[v[i]]++;
            cout<<v[i]<<endl;
        }
    }
    return 0;
}
