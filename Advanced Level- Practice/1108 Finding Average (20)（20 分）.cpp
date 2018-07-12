#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
int n;
char str[101][101];
bool check(char s[]){
    int i = 0;
    if(s[0]=='-'){
        i++;
    }
    for(;s[i]&&s[i]!='.';i++){
        if(!isdigit(s[i])){
            return false;
        }
    }
    if(s[i]=='.'){
        for(int j=i+1;s[j];j++){
            if(!isdigit(s[j])||j-i>2){
                return false;
            }
        }
    }
    double a = fabs(atof(s));
    if(a>1000.0){
        return false;
    }
    return true;
}
void solve(){
    int ans = 0;
    double sum = 0;
    for(int i=0;i<n;i++){
        if(check(str[i])){
            ans++;
            sum += atof(str[i]);
        }else{
            printf("ERROR: %s is not a legal number\n",str[i]);
        }
    }
    if(ans){
        if(ans==1){
            printf("The average of 1 number is %.2lf\n",sum);
        }else{
            printf("The average of %d numbers is %.2f\n",ans,sum/ans);
        }
    }else{
        printf("The average of 0 numbers is Undefined\n");
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    solve();
    return 0;
    }
