#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a[10],n,i,j,k,t1,t2,t3;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    for(k=0;k<n;k++)
    {
      if(pow(a[i],2)+pow(a[j],2)==pow(a[k],2))
      {
          t1=i;
          t2=j;
          t3=k;
          break;
      }
    }
   }
}
printf("%d\t%d\t%d",t1,t2,t3);
return 0;
}
