#include<iostream>
using namespace std;
int main()
{   
    string a,b,c,d;
    int flag=0;
    string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    cin>>a>>b>>c>>d;
    int length1=a.length()>b.length()?b.length():a.length();
    for(int i=0;i<length1;i++)
    {   //寻找第一个相同的大写字母，因为对应的是星期几，所以只找前7个即可 
        if(a[i]==b[i]&&(a[i]>=65&&a[i]<=71)&&flag==0)
        {
            flag=1;
            cout<<week[a[i]-65]<<" ";
            i++;
        }//注意找第二对相同的字符的时候，是从第一队相同大写字母后面找
        //因为样例中8相同，但是他却说E是相同的字符，其次该字符必须在
        //0-9或者A-N之间才行。 
        if(flag==1&&a[i]==b[i])
        {
            if(a[i]>='0'&&a[i]<='9')
            {
                cout<<"0"<<a[i]-'0'<<":";
                break;
            }
            if(a[i]>='A'&&a[i]<='N')
            {
                cout<<a[i]-65+10<<":";
                break;
            }   
        }
    }
    int length2=c.length()>d.length()?d.length():c.length(); 
    for(int i=0;i<length2;i++)
    {   //后两字符串必须满足是两个英文字母相等才可以 
        if(c[i]==d[i]&&((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122)))
        {
            if(i<=9)    //不足两位数补0 
            {
                cout<<"0"<<i<<endl;
                    break;
            }
            else
            {
                cout<<i<<endl;
                    break;
            }
        }
    }
    return 0;   
}
