#include <stdio.h>
void sum(int begin,int end);//函数声明(圆形)，记得有分号！

int main(){
    sum(2,3);//调用函数，即使没有参数也要有()
    return 0;
}

void sum(int begin,int end)//定义
    {
        int i;
        int sum = 0;
        for(i =begin;i <= end;i++){
            sum+=i;
        }
    printf("sum=%d\n",sum);
    }//累加函数
