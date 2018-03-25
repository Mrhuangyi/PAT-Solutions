#include<iostream>
using namespace std;
    int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int test[11]={1,0,10,9,8,7,6,5,4,3,2};
bool isright(string ss){
    int sum=0;
   for(int i=0;i<17;i++)
   {
       if(ss[i]<'0'||ss[i]>'9')
        return false;
        else{
            sum+=(ss[i]-'0')*weight[i];
        }
   }
   int x=0;
   if(ss[17]=='X')
    x=10;
   else
    x=ss[17]-'0';
   if(test[sum%11]==x)
   return true;
   else
    return false;
}
int main()
{
    int n,ans=0;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(!isright(s))
        {
            cout<<s<<endl;
            ans++;
        }
    }
    if(ans==0)
        cout<<"All passed"<<endl;
        return 0;
}
