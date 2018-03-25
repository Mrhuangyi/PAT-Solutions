#include<bits/stdc++.h>
using namespace std;
int findy(int y)
{
 int count=0,t,i=0;
 set<int> a;
while(y!=0)
{
	t=y%10;
	a.insert(t);
	y/=10;
	i++;
}
set<int>::iterator it;
for(it=a.begin();it!=a.end();it++)
{
	count++;
}
if(i<=3&&a.find(0)==a.end()){
count++;}
return count;
}
int main()
{
	int n,m,x,y,b;
	cin>>y>>n;
    b=findy(y);
	int a=0;
	if(b==n)
	{
		cout<<"0 ";
		if(y<10)
			cout<<"000"<<y;
		if(y>=10&&y<100)
			cout<<"00"<<y;
		if(y>=100&&y<1000)
			cout<<"0"<<y;
		if(y>=1000)
			cout<<y;
	}
	else{
	while(b!=n)
	{
		y++;
		a++;
		b=findy(y);
	}
	cout<<a<<" ";
	if(y<10)
			cout<<"000"<<y;
		if(y>=10&&y<100)
			cout<<"00"<<y;
		if(y>=100&&y<1000)
			cout<<"0"<<y;
		if(y>=1000)
			cout<<y;
	}
	return 0;
}
