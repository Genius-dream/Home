#include <stdio.h>
int main()
{
    printf("请输入你想相加的两个数字,""如\"5 7\":");

    double a=0;
    double b=0;
    double c=0;

    scanf_s("%lf %lf",&a,&b);
    c=a+b;

    printf("得到的结果为:%f",c);

    return 0;

}