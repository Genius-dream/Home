#include <stdio.h>

//数组不能整体赋值，只能逐个元素赋值
int main(void){
    int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32,};
    //直接用大括号给出数组的所有元素初始值，不需要给出数组大小，编译器会帮你数
    int length = sizeof(a)/sizeof(a[0]);

    int i;
    for(i=0;i<length;i++){
        printf("%d\t",a[i]);
    }

    printf("\n");

    int b[length];
    int j = 0;
    
    
    for(j = 0;j<length;j++){
        b[j] = a[j];//将a数组的元素复制到b数组中（数组唯一可赋值场景）
    }
    //注意：离开一个循环后，不要再用i的值来做数组元素的下标，因为i已被赋值
    for(j = 0;j<length;j++){
        printf("%d\t",b[j]);
    }
    printf("\n");

    return 0;
}