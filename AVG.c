#include <stdio.h>
int main()
{
    int number;
    double sum=0;
    int count=0;
    
    printf("请输入不为-1的整数(因为你将以-1结束计算):");
    scanf_s("%d",&number);


    while (number !=-1){
        sum+=number;
        count++;
        scanf_s("%d",&number);
    }
    printf("%f",sum/count);
    return 0;
}