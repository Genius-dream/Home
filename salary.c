#include <stdio.h>
int main()
{
    const double rate = 8.25;
    const int standard = 40;
    float pay = 0.0;
    float hours;

    printf("请输入工作时数：");
    scanf_s("%f",&hours);
    printf("\n");
    
    if(hours>standard){
        pay = standard*rate+(hours-standard)*(rate*15);
    }else{
        pay = hours*rate;
    }

    printf("应付工资：%f\n",pay);

    return 0;
}