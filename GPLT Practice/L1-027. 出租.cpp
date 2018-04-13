#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[12];
    int arr[10]={0},index[10],num;
    scanf("%s",str);
    for(int i=0;i<11;i++){
        arr[str[i]-'0']++;
    }
    printf("int[] arr = new int[]{");
    num = 0;
    int a[10];
    for(int i=9;i>=0;i--)
        if(arr[i]) a[num]=i,num++;
    for(int i=0;i<num;i++){
        printf("%d",a[i]);
        if(i<num-1) printf(",");
    }
    printf("};\n");
    printf("int[] index = new int[]{");
    for(int i=0;i<11;i++){
        for(int j=0;j<num;j++){
            if((str[i]-'0')==a[j]){
                printf("%d",j);
                break;
            }
        }
        if(i<10) printf(",");
    }
    printf("};\n");
    return 0;
}
