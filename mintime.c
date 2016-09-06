#include<stdio.h>
void main(){
int h1,m1,s1,h2,m2,s2;
int diffsecs,diffmin,diffhrs;
printf("Enter 1st Time");
scanf("%d\t%d\t%d\n",&h1,&m1,&s1);
printf("Enter 2nd Time");
scanf("%d\t%d\t%d\n",&h2,&m2,&s2);
int t1_in_secs=h1*3600+m1*60+s1;
int t2_in_secs=h2*3600+m2*60+s2;
diffsecs=t1_in_secs-t2_in_secs;
diffmin=diffsecs/60;
printf("\n%d",diffmin);
}
