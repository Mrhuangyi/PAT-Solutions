#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct student
{
    string name;
    string number;
    int grade;
};
bool cmp(student a,student b)
{
    return a.grade<b.grade;
}
int main()
{
    student a[1110];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].number>>a[i].grade;
    }
    sort(a,a+n,cmp);
    cout<<a[n-1].name<<" "<<a[n-1].number<<endl;
    cout<<a[0].name<<" "<<a[0].number<<endl;
    return 0;
}
