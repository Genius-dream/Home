#include <stdio.h>
// 找出key在数组a中的位置
// @param key 要查找的数字
// @param a 数组
// @param length 数组长度
// @return 找到就返回下标即其在a中的位置，找不到就返回-1

int search(int key,int a[],int length);

int main(void){
    int a[] ={2,4,6,1,3,9,9,0,3,3,2,32,22,} ;
    int x;
    int loc;
    printf("请输入一个数字：");
    scanf("%d",&x);
    loc = search(x,a,sizeof(a)/sizeof(a[0]));
    if(loc !=-1){
        printf("%d在第%d个位置上\n",x,loc);
    }else{
        printf("%d不存在\n",x);
    }
    return 0;

}

int search(int key,int a[], int length)
{
    int ret = -1;
    int i;
    for (i = 0; i< length; i++){
        if(a[i] == key){
            ret = i;
            break;
                    
        }
    }
    return ret;
}