#include<stdio.h>
main()
{
int base,exponent;
long long power=1;
int i;
printf("Enter base:");
scanf("%d",&base);
printf("Enter exponent:");
scanf("%d",&exponent);
for(i=1;i<=exponent;i++)
{
power=power*base;
}
printf("%d^%d=%11d",base,exponent,power);
}
