#include <stdio.h>

//计算1/2+3/2+5/3.....
int main(){
    int n;
    double dividend,divisor;//被除数与除数
    double sum =0.0;
    int i;
    double t;

    scanf_s("%d",&n);
    dividend = 2;
    divisor = 1;
    for(i =1;i<=n;i++){
        sum +=dividend/divisor;
        t = dividend;//给个容器
        dividend=dividend + divisor;
        divisor = t;

    }
    printf("%f %f\n",dividend,divisor);
    printf("%.2f\n",sum);

    return 0;
}