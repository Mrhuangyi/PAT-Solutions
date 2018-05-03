#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
bool isPal(string s){
    for(int i=0,k=s.length()-1;i<=(k+1)/2;i++){
        if(s[i]!=s[k-i])
            return false;
    }
    return true;
}
string add(string a,string b){
    int t=0;
    for(int i=0;i<b.length();i++){
        t=t+a[i]-'0'+b[i]-'0';
        a[i]='0'+t%10;
        t/=10;
    }
    if(t>0) a+="1";
    reverse(a.begin(),a.end());
    return a;
}

int main()
{
    string a,b,c;
    cin>>a;
    if(isPal(a)){
        cout<<a<<" is a palindromic number."<<endl;
        return 0;
    }
    for(int i=0;i<10;i++){
            c=a;
        reverse(c.begin(),c.end());
        b=c;
        cout<<a<<" + "<<b<<" = ";
        a=add(a,b);
        cout<<a<<endl;
        if(isPal(a)){
             cout<<a<<" is a palindromic number."<<endl;
        return 0;
        }
    }
    cout<<"Not found in 10 iterations.\n";
    return 0;
}
