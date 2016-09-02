#include<stdio.h>
int main()
{
int n,sum=0;
scanf("%d",&n);
for(n>0)
{
n=n/10;
sum++;
}
printf("%d",sum);
return 0;
}
