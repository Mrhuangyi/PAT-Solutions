#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num=0,s[111];
    bool over[111]={false};
    vector<int> a[111];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&s[i]);
        s[i]*=10;
    }
    int k=1;
    while(num<n){
        for(int i=1;i<=n;i++){
            if(a[i].size()<s[i]){
                a[i].push_back(k);
                if(num==n-1) k+=2;
                else k++;
            }
            if(a[i].size()==s[i]&&over[i]==false){
                over[i]=true;
                num++;
            }
        }
    }
    for(int j=1;j<=n;j++){
        printf("#%d\n",j);
        for(int l=0;l<a[j].size();l++){
            if(l!=0&&(l+1)%10==0) printf("%d\n",a[j][l]);
            else
                printf("%d ",a[j][l]);
        }
    }
    return 0;
}
