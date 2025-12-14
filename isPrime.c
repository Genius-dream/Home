 #include <stdio.h>
int main()
{
    printf("请输入你想验证是否为素数的整数：");
    int number = 0;
    scanf_s("%d\n",&number);
    if(number<2){
        printf("不是素数");
        return 0;
    }
    int i;
    int is_Prime=1;//假设是素数
    for(i=2;i*i<=number;i++){
        //如果number有大于其平方根的因数，则必然存在一个小于其平方根的对应因数
        if(number%i==0){
            is_Prime=0;//不是素数
            break;
        }
    }if(is_Prime==1){
        printf("是素数");
    }else{
        printf("不是素数");
    }
    return 0;
}
