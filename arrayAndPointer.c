#include <stdio.h>
//以下四种函数原形里的数组表示等价：int *a, int a[], int[],int a[/*任意整数*/]
void minmax(int a[], int len, int *min, int *max){
    *min =*max =  a[0];
    printf("minmax sizeof(a) = %lu\n",sizeof(a));
    //数组作为函数参数时，会"退化"成指针,所以sizeof(a)得到的是指针的大小
    printf("minmax a = %p\n",a);
    //表示a指针地址
    for(int i = 1; i < len; i++){
        if(a[i] < *min){
            *min = a[i];
        }
        if(a[i] > *max){
            *max = a[i];
        }
    }
}

int main(void){
    int a[] = {1,2,8,8,9,30,17,6,8,2,3,1,2,2,12,};
    int min,max;
    
    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    printf("min = %d,max = %d\n",min,max);

    printf("main sizeof(a) = %lu\n",sizeof(a));
    printf("main a = %p\n",a);
    return 0;
}