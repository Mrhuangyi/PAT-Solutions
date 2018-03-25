#include<cstdio>
#include <iostream>
using namespace std;
int main() {
   int n,x;
   char a;
   scanf("%d %c",&n,&a);
   if(n%2==0)
    x=n/2;
   else
    x=n/2+1;
   for(int i=0;i<x;i++){

    for(int j=0;j<n;j++)
   {
     printf("%c",a);
   }
   printf("\n");
   }
    return 0;
}
