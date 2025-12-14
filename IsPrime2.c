#include <stdio.h>
int main(){
    int m,n;//定义区间
    int cnt=0;
    int sum=0;
    int i;

    scanf_s("%d %d",&m,&n);
if( m == 1){
    m=2;
}//1不是素数，从2开始查
for(i = m;i <= n;i++){
    //遍历区间内每个数
    int isPrime = 1;//假设是素数
    //放在这里不放在作用域外是为了优先使用最小作用域

    //性能优化：如果数 i 不能被任何小于或等于 √i 的整数整除，
    //那么它就是一个素数。
    //此处可写k<=sqrt(i)浮点数运算 稍微低效了一点 但更直观
    for(int k = 2;k*k <=i;k++){
        if(i%k == 0){
            //注意==关系运算符！！！这里指找到既不是1也不是本身的因子
            isPrime = 0;
            break;
        }
    }
    //当使用整型变量作为布尔标志时（1表示真，0表示假），
    //直接使用 if (variable) 或 if (!variable) 来判断是惯用且简洁的写法
    if(isPrime){
        cnt++;
        sum+=i;
    }
}    
printf("%d %d\n",cnt,sum);

    return 0;
}