#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,target=9;
int a[4]={2,7,11,15};
clrscr();
for(i=0;i<=4;i++)
{
if(a[i]+a[i+1]==target)
printf("the numbers are %d %d",a[i],a[i+1]);
}
getch();
}
