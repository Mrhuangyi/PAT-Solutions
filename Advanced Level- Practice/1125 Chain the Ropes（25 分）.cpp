#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,x;
    scanf("%d",&n);
    vector<int> v;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int result=v[0];
    for(int i=1;i<n;i++){
        result=(result+v[i])/2;
    }
    printf("%d",result);
    return 0;
}
