#include <stdio.h>
int main(){
    int n;
    int i,j;
    n=9;
    for(i=1;i<=n;i++){
    
    for(j=1;j<=i;j++){
   
    if(i*j<10){
        printf("%d*%d=%d   ",j,i,j*i);
    }else{
        printf("%d*%d=%d  ",j,i,j*i);
    }
    }
    printf("\n");
    }
    return 0;
}