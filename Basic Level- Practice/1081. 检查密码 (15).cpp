#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    getchar();
    int tag1=0,tag2=0,tag3=0,tag4=0;
    while(n--){
        getline(cin,s);
          if(s.length()<6){
            cout<<"Your password is tai duan le."<<endl;
        }else {
        for(int i=0;i<s.length();i++){
            if(s[i]>='0'&&s[i]<='9'){
                tag1=1;
            }
            else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                tag2=1;
            }
            else if(s[i]=='.'){
                tag3=1;
            }
            else{
                tag4=1;
            }
        }
      if(tag4==1){
            cout<<"Your password is tai luan le."<<endl;
        }else if(tag2==1&&tag1==0){
            cout<<"Your password needs shu zi."<<endl;
        }else if(tag1==1&&tag2==0){
            cout<<"Your password needs zi mu."<<endl;
        }
        else{
            cout<<"Your password is wan mei."<<endl;
        }
        }
        tag1=0,tag2=0,tag3=0,tag4=0;
    }
    return 0;
}
