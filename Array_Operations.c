#include <stdio.h>

int search(int key,int a[],int length);

int main(void){
    int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32};
    //直接用大括号给出数组的所有元素初始值，不需要给出数组大小，编译器会帮你数
{
        int i;
        for(i = 0;i<13;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
    return 0;
}