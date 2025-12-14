#include <stdio.h>
int main(void){
    const int number = 10;
    int x;
    int count[number] = {0};//10个元素，如count[1]记录1出现的次数
    int i;
    // for(i=0;i <number;i++){
    //    count[i]=0;//初始化第i个元素为0，确保计数从零开始，避免垃圾值
    // }

    scanf("%d",&x);

    while(x !=-1){
        if(x>=0 && x<=9){
            count[x]++;//根据x找到数组里对应位置，找到一次加一次
        }
        scanf("%d",&x);
    }

    for(i = 0;i<number;i++){
        printf("%d:%d\n",i,count[i]);
    }//遍历数组并输出

    return 0;
}