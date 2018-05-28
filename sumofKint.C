#include <stdio.h>
int main() 
{
int n,k,a[5],i,sum=0;
scanf("%d%d",&n,&k);
for(i=1;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=k;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
return 0;
}
