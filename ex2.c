#include<stdio.h>
void main()
{
int i=0,j=9;
int a[4]={2,7,11,15};
for(i=0;i<=4;i++)
{
if(a[i]+a[i+1]==j)
printf("the numbers are %d %d",a[i],a[i+1]);
}
getch();
}
