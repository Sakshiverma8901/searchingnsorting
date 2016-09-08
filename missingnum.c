#include<stdio.h>
int main()
{
int a[10],n,sum1=0,sum2=0;
int temp;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sum1=(n*(n+1)/2);
for(i=0;i<n;i++)
sum2=sum2+a[i];
temp=sum1-sum2;
printf("%d",temp);
return 0;
}
