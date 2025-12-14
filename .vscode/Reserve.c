#include <stdio.h>
int main()
{

    int number;
    number=123;
    int ret=0;
    int rest_number=0;
    //scanf_s("%d\n",&number);

    while(number>0){
        rest_number=number%10;
        ret=ret*10+rest_number;
        number/=10;
    }

    printf("最终逆序数为：%d",ret);

    return 0;
    
}