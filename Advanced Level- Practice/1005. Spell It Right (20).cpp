#include<bits/stdc++.h>
#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=s[i]-'0';
    }
    string a=to_string(sum);
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout<<arr[a[0]-'0'];
    for(int i=1;i<a.length();i++)
        cout<<" "<<arr[a[i]-'0'];
return 0;
}
