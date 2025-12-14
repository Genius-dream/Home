#include <stdio.h>
#define SIZE 100 //使用宏定义数组大小，方便管理

int main (){
    int x;
    double sum = 0;
    int cnt = 0;
    int number[SIZE]={0};
    //定义一个可以存放100个整数的数组number。它的作用是保存所有用户输入的有效数字（不包括结束标志-1）
    //并注意显式初始化，引用宏定义大小
    scanf("%d",&x);
    while (x !=-1 && cnt < SIZE){//增加条件cnt <SIZE防止越界
        number[cnt] = x;//cnt是下标，指向数组第一个空位 比如number[0]=5
        sum +=x;
        cnt ++;
        scanf("%d",&x);

    }
    if(cnt >0){
        int i;
        double average = sum /cnt;
        for(i = 0;i<cnt;i++)//遍历数模版
        {
            if(number[i] >average){
                printf("%d",number[i]);
            }
        }
    }
    return 0;
}
