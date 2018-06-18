#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    string s1,s2,s3;
    int n;
    while(cin>>s1>>n){
            getchar();
    int m = 0;
    while(getline(cin,s2)){
            if(s2=="#"){
                break;
            }
          m++;
          if(m<=n&&s1==s2){
            cout<<"Welcome in"<<endl;
            break;
          }
          if(m<=n&&s2!=s1){
            cout<<"Wrong password: "<<s2<<endl;
            if(m==n){
                cout<<"Account locked";
                break;
            }
          }
          }
    }
          return 0;
}
