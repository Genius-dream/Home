#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,6,2,6,};
    int *p = arr;

    int *p1 = &arr[2];
    int *p2 = &arr[5];

    if(p1 <p2){
        printf("p1指向的元素在前面\n");
    }

    printf("%d\n",*p++);//输出取当前值，指针往后移一位
    printf("%d\n",(*p)++);//输出取当前值，当前位置的值加一，指针不变
    printf("%d\n",*p);//输出当前位置的值，即上一个位置加一后的值（自增后的）

    //不同类型的指针不能相互赋值，相同类型可以 如p1=p2
    return 0;
}