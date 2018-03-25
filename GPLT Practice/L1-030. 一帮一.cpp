#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
struct student
{
    int sex;
    string name;
};
int main()
{
    int n,a;
    string s;
    scanf("%d",&n);
    student stu[n];
    int vis[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].sex>>stu[i].name;
    }
    for(int i=0;i<n/2;i++)
    {
        cout<<stu[i].name<<" ";
        for(int j=n-1;j>=n/2;j--)
        {
            if(vis[j]==0&&stu[j].sex!=stu[i].sex)
            {
                cout<<stu[j].name<<endl;
                vis[j]=1;
                break;
            }
        }

    }
    return 0;
}
