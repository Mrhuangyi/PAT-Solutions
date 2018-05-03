#include<iostream>
#include<string>
using namespace std;
int main()
{
    char type;
    scanf("%c",&type);
    string s;
    getchar();
    getline(cin,s);
    if(type=='C'){

    for(int i=0;i<s.size();i++){
            int cnt=0;
       while(s[i]==s[i+1])
        i++,cnt++;
       if(cnt!=0)
            cout<<cnt+1;
        cout<<s[i];
    }
    }else{

    for(int i=0;i<s.size();i++){
             int cnt=0;
    while(s[i]<='9'&&s[i]>='0')
        cnt=cnt*10+s[i++]-'0';
    for(int j=0;j<cnt;j++)
    cout<<s[i];
    if(cnt==0)
        cout<<s[i];
    }
    }
    return 0;
}
