#include <stdio.h>
#include <stdlib.h>//用来包含malloc和free函数的声明
//动态内存分配
int main(){
    int number;
    printf("输入数量：");
    scanf("%d",&number);
    //int a[number];
    int i;
    int *a;//定义一个指针变量
    a = (int*)malloc(number*sizeof(int));//动态分配内存
    for(i=0;i<number;i++){
        scanf("%d",a+i);

    }
    for(i=number-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
    free(a);//释放内存，把申请得来的内存还给系统
    //出来混，迟早要还的
    printf("程序结束。\n");
    return 0;



}