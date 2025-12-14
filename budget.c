#include <stdio.h>
int main()
{
    float daily_budget ,expense, total_spent = 0;
    char choice;

    printf("欢迎使用个人预算系统！今日的节省是为了以后的幸福~\n");
    printf("请输入今日的预算:");
    scanf_s("%f",&daily_budget);

    do{
        printf("\n当前已花费:%.2f元，剩余预算:%.2f元\n",
        total_spent,daily_budget-total_spent);

        printf("请输入本次消费金额:");
        scanf_s("%f",&expense);

        total_spent +=expense;
        
        if (total_spent>daily_budget){
            printf("警告！警告！已超出预算%.2f元！\n",total_spent-daily_budget);
        }
        printf("是否要继续记录消费？(Y/N):");

        scanf_s(" %c",&choice);

    }while(choice == 'Y' ||choice == 'y');

    printf("\n 今日消费总结报告新鲜出炉啦~ \n");
    printf("总花费：%.2f元，预算：%.2f元\n",total_spent,daily_budget);
    printf("今天你省下了(好吧也有可能是浪费...)：%.2f元\n",daily_budget-total_spent);

    return 0;

}