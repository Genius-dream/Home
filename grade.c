#include <stdio.h>
int main()
{
    printf("请输入你的成绩：");
    float mark;
    char *grade;
    
    scanf("%f",&mark);

    if(mark<0 || mark>100)
    {
        grade = "无效";
        printf("请重新启动程序输入新值\n");
        return 0;
    }else if(mark>=95){
        grade = "A+";
        printf("Perfect!");
    }else if(mark>=90){
        grade = "A";
    }else if(mark>=80){
        grade = "B";
    }else if(mark>=70){
        grade = "C";
    }else if(mark>=60){
        grade = "D";
    }else{
        grade = "F";
    }
        printf("你的等级为:%s\n继续加油！",grade);

    return 0;
}