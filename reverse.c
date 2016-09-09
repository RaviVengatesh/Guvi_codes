#include<stdio.h>
#include<conio.h>
int main()
{
int a,r=0,i;
printf("Enter the number:");
scanf("%d",&a);
while(a>=1)
{
i=a%10;
r=r*10+i;
a=a/10;
}
printf("After:%d",r);
return 0;
}
