#include <iostream>
int main()
{
    int f,l,i,j,flag;
    cin>>f>>l;
    for(i=f+1;i<l;i++){
        flag = 0;
        for(j=2;j<i;j++){
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<i<<" ";
        }                
    }
    return 0;
}
