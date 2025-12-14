#include <stdio.h>
int main()
{
    printf("请输入你想做除法的两个数,""如\"5\"7表示被除数与除数:");

    double a =0;
    double b =0;
    double c =0;

    scanf_s("%lf %lf",&a,&b);
    
    c=a/b;

    printf("恭喜你完成小学生都会的题,答案为:%f",c);

    return 0;

}