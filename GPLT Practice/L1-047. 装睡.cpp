#include<bits/stdc++.h>
using namespace std;
struct zhuangshui
{
    char name[3];
    int huxi;
    int maibo;
}a[111];
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {

      cin>>a[i].name>>a[i].huxi>>a[i].maibo;
      if(a[i].huxi<15||a[i].huxi>20||a[i].maibo>70||a[i].maibo<50)
          cout<<a[i].name<<endl;
   }
    return 0;
}
