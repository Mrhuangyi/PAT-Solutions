#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int a[1001]={0};
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<s1.size();i++){
        a[s1[i]]++;
    }
    int tag=1,cnt=0;
    for(int i=0;i<s2.size();i++){
        if(a[s2[i]]!=0){
            a[s2[i]]--;
        }
        else{
            tag=0;
            cnt++;
        }
    }
    if(tag){
        int tmp=s1.size()-s2.size();
        printf("Yes %d",tmp);
    }else{
    printf("No %d",cnt);
    }
    return 0;
}
