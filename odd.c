#include<stdio.h>

int main()
{
  int ip;
  printf("Enter Number:\n");
  scanf("%d",&ip);
  if(ip%2==0)
  {
    printf("Number is Even");
  }
  else
  {
    printf("Number is Odd");
  }
return 0;
}