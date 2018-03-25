#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,q;
    string s;
    cin>>k;
    q=0;
    while(cin>>s)
    {
        if(s=="End")
            break;
        q++;
        if(q%k==1&&q!=1){
            cout<<s<<endl;
            q=0;
        }
        else
        {
            if(s=="Bu")
                cout<<"JianDao"<<endl;
            if(s=="ChuiZi")
                cout<<"Bu"<<endl;
            if(s=="JianDao")
                cout<<"ChuiZi"<<endl;
        }
    }
    return 0;
}
