#include <stdio.h>
void tower(int n,char s,char e,char t){
    if(num==1){
        printf("\nMoving disc 1 from peg %c to peg %c",s,e);
        return;
    }
    tower(n-1,s,t,e);
    printf("\nMoving disc %d from peg %c to peg %c",n,s,e);
    tower(n-1,e,s,t);
}

int main(){
    int n;
    scanf("%d",&n);
    tower(n,'S','E','T');
    return 0;
}
