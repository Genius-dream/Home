#include <stdio.h>
int main(){
    int x;
    scanf_s("%d",&x);

    if(x < 0){
        printf("负 "); 
        x = -x;
    }

    int mask = 1;
    int t = x;
    while(t > 9){
        t/=10;
        mask*=10;
    }//通过这个while能使mask变成与t同位数的1后面带几个零的数，如t =12345，mask =10000

    do{
        int d = x / mask;//得到最高位数字
        switch( d ){
            case 0 :printf("零");break;
            case 1 :printf("一");break;
            case 2 :printf("二");break;
            case 3 :printf("三");break;
            case 4 :printf("四");break;
            case 5 :printf("五");break;
            case 6 :printf("六");break;
            case 7 :printf("七");break;
            case 8 :printf("八");break;
            case 9 :printf("九");break;
        }
        if(mask > 9) printf(" ");
        x %= mask;//剥离最高位,只留下剩下的数字
        mask /= 10;//对应剩下的数字同位数的1后面加几个零

    }while( mask >0);
    printf("\n");

    return 0;
}