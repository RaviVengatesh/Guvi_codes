#include<stdio.h>
#include<conio.h>
int main()
{
int i1,i2,i,j;
printf("enter interval1,interval2");
scanf("%d%d",&i1,&i2);
if(i1%2==0)
{
j=i1+1;
}
else
{
j=i1;
}
printf("odd nos are");
for(i=j;i<i2;i=i+2)
{
printf("%d,",i);
}
getch();
return 0;
}
