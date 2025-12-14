#include <stdio.h>
int main()
{
    int length;
    printf("请输入换算的数字(单位:cm):");
    scanf_s("%d",&length);
    
    float foot_total;
    foot_total=length /30.48;

    int foot;
    int inch;
    foot=(int)foot_total;
    inch=(int)((foot_total-foot)*12);

    printf("%d %d\n",foot,inch);
    
    return 0;

}