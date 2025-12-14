#include <stdio.h>
int main(){
    int x;
    scanf_s("%d",&x);

    int mask = 1;
    int t = x;
    while (t > 9){
        t/=10;
        mask *= 10;
    }
    printf("x=%d,mask=%d\n",x,mask);
    do{
        int d = x /mask;
        printf("%d",d);
        if(mask > 9){
            printf(" ");
        }
        x %=mask;
        mask /=10;
    }while ( mask > 0);//while也行 验证x为零的情况可以 但do-while保证至少输出一位的原则，逻辑更清楚
    
    printf("\n");
    return 0;
}