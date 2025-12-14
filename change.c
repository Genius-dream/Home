#include <stdio.h>
int main()
{
    double price=0;
    double ammount=0;

    printf("请输入金额(元):");
    scanf_s("%lf",&price);

    printf("请输入具体票值:");
    scanf_s("%lf",&ammount);

    if (ammount>=price){
        double change = ammount-price;
        printf("找您%f元。\n",change);
    }else{
        printf("你的钱不够，请再给点。");
    }
    return 0;
}