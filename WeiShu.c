#include <stdio.h>
int main()
{
    int x;
    int n = 0;
    printf("请输入你想查位数的数：");
    scanf_s("%d",&x);
    do{
    n++;
    x/=10;
    }
    while (x>0);
    printf("%d\n",n);
    return 0;
}