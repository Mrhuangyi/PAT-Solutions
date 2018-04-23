#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int n;
    string s[111];
    scanf("%c %d",&c,&n);
    getchar();
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    bool isSame =true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int i2=n-i-1;
            int j2=n-j-1;
            if(s[i2][j2]!=s[i][j]) isSame=false;
        }
    }
    if(isSame){
        printf("bu yong dao le\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s[i][j]==' ') printf(" ");
                else printf("%c",c);
            }
            printf("\n");
        }
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int i2=n-i-1;
            int j2=n-j-1;
            if(s[i2][j2]==' ') printf(" ");
            else printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
