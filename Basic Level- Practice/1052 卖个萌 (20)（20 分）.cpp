#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
vector<string> get(string s){
    vector<string> v;
    string temp = "";
    v.push_back(temp);
    bool flag = false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='['){
            flag = true;
        }else{
            if(s[i]==']'){
                v.push_back(temp);
                flag = false;
                temp = "";
            }else if(flag){
                temp +=s[i];
            }
        }
    }
    return v;
}
int main(){
    string s;
    getline(cin,s);
    vector<string> hand = get(s);
    getline(cin,s);
    vector<string> eye = get(s);
    getline(cin,s);
    vector<string> mouth = get(s);
    int k;
    scanf("%d",&k);
    int a,b,c,d,e;
    for(int i=0;i<k;i++){
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        if(a>=hand.size()||a<1||e>=hand.size()||e<1||b>=eye.size()||b<1||d>=eye.size()||d<1||c>=mouth.size()||c<1){
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
       cout<<hand[a]<<"("<<eye[b]<<mouth[c]<<eye[d]<<")"<<hand[e]<<endl;

    }
    return 0;
}
