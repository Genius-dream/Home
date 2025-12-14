//水仙花数：一个N位正整数(N >=3),它的每个位上的数字的n次幂之和等于它本身

#include <stdio.h>
int main(){
    int n;
    scanf_s("%d",&n);
    int first = 1;//设置初始值，便于表示1,10,100...一般是n位数的最小值的单位元
    int i = 1;
    //计算n位数的min
    while (i < n){
        first *=10;
        i ++;
    }
    printf("first=%d\n",first);

    i = first;//从最小的n位数开始
    //   <first*10--遍历最小到最大
    while(i<first*10){
        int t =i;//保护原始数据
        int sum =0;
        do{
            int d =t%10;//取这个数个位
            t/=10;//去掉个位，便于分析剩下的
            int p =1;//初始化
            int j =0;//计数器为0
            while (j <n){
                p*= d;//循环n次
                j++;
            }//
            sum +=p;
        }while (t >0);
        if (sum == i){
            printf("%d\n",i);//判断是不是水仙花数
        }
        i++;//一直遍历到不符合循环条件
    }

    return 0;
}