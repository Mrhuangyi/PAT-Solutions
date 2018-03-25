#include<stdio.h>  
int main()  
{  
  int a,b;  
  int sum;  
  while(scanf("%d%d\n",&a,&b) != EOF){  
        sum = a+b;  
    if(sum < 0){  
    printf("-");  
    sum = -sum;  
    }  
    if(sum>=1000000){  
        printf("%d,%03d,%03d\n",sum/1000000, (sum/1000)%1000, sum%1000);  
    }  
    else if(sum >= 1000){  
        printf("%d,%03d\n",sum/1000,sum%1000);  
    } else{  
        printf("%d\n", sum);  
    }  
  }  
  return 0;  
}
