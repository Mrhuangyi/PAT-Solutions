#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int tag=0;
    vector<char> s3;
    map<char,int> p;
    getline(cin,s1);
    getline(cin,s2);
    if(s1.length()==0){
        cout<<s2;
        return 0;
    }
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='+'){
            tag=1;
        }
        if(s1[i]>='A'&&s1[i]<='Z')
        p[s1[i]+32]=p[s1[i]]=1;
        else
            p[s1[i]]=1;
    }
    for(int i=0;i<s2.size();i++){

        if(tag==1){
        if(s2[i]>='A'&&s2[i]<='Z'){
            p[s2[i]]=1;
        }}
        if(p[s2[i]]!=1){
            s3.push_back(s2[i]);
        }
    }
    if(!s3.empty()){
    for(int i=0;i<s3.size();i++)
        cout<<s3[i];
    }
    else
        printf("\n");
    return 0;
}
