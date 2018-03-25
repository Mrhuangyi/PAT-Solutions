#include<stdio.h>
int main()
{
    int i,n,a[1001],sum1,sum2,count1,count2;
    scanf("%d",&n);
    sum1=sum2=count1=count2=0;
    double avg,sum3=0;
    int flag=1,max=0,t=0;
  for(i=1;i<=n;i++)
  {

      scanf("%d",&a[i]);
      if(a[i]%5==0&&a[i]%2==0)
        sum1+=a[i];
      if(a[i]%5==1){
        sum2+=a[i]*flag;
        flag=flag*-1;
        t++;
      }
      if(a[i]%5==2)
        count1++;
      if(a[i]%5==3){
        sum3+=a[i];
        count2++;
        }
      if(a[i]%5==4)
      {
          if(a[i]>max)
            max=a[i];
      }
  }
  avg=sum3/count2;
  if(sum1==0)
    printf("N ");
  else
    printf("%d ",sum1);
  if(t==0)
    printf("N ");
  else
    printf("%d ",sum2);
  if(count1==0)
    printf("N ");
  else
    printf("%d ",count1);
  if(count2==0)
    printf("N ");
  else
    printf("%.1lf ",avg);
  if(max==0)
    printf("N");
  else
    printf("%d",max);

  return 0;
}
