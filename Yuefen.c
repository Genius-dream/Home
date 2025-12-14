#include <stdio.h>
int main(){
    int m ,n;
    int t;
    scanf_s("%d/%d",&m,&n);
    if(n == 0){
        printf("不能构成分数\n");
        return 1;
    }
    if (m ==0){
        printf("0/%d\n",&n);
        return 1;
    }
     
    int a = m;
    int b = n;
    while (b!=0){
        t = a % b;
        a = b;
        b = t;
    }
    
    printf("%d/%d\n",m/a,n/a);
    return 0;
}