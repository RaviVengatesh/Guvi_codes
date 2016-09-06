#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char *a,temp,temp2;
	int i;
	a=malloc(1000000);
	scanf("%s",a);
	i=0;
	if(strlen(a)%2!=0){
	temp2=*(a+(strlen(a)-1));
	}
	while(i<strlen(a)){
		temp=*(a+i);
		*(a+i)=*(a+(i+1));
		*(a+(i+1))=temp;
		i=i+2;
	}
	*(a+(strlen(a)-1))=temp2;
	printf("%s",a);
	
}
