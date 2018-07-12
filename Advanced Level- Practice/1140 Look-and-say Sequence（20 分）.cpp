#include<iostream>
using namespace std;
int main()
{
    string a;
    int n;
    cin>>a>>n;
    while(--n){
        string ans;
        char c=a[0];
        int cnt=0;
        for(int i=0;i<a.length();i++){
            if(a[i]==c) cnt++;
            else{
                ans+=c;
                ans+=cnt+'0';
                c=a[i];
                cnt=1;
            }
        }
        if(cnt>0){
            ans+=c;
            ans+=cnt+'0';
        }
        a=ans;
    }
    cout<<a<<endl;
    return 0;
}
