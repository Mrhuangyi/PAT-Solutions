#include<iostream>
#include<set>
#include<cstdio>
using namespace std;
int main()
{
    set<int> s;
    int n,d;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&d);
        if(s.empty()){
            s.insert(d);
        }else{
            set<int>::iterator it;
            it = s.lower_bound(d);
            if(it==s.end()){
                s.insert(d);
            }else{
                s.erase(it);
                s.insert(d);
            }
        }
    }
    printf("%d",s.size());
    return 0;
}
