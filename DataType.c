#include <stdio.h>
int main(){
    int a;
    a = 6;
    //
    printf("sizeof(long double)=%ld\n",sizeof(long double));
    printf("sizeof(a)=%ld\n",sizeof(a));
    //sizeof不会做计算 是静态的 在编译前结果已经定了
    //编译器不同 可能长度不同
    // char :1字节
    // short :2字节
    // int:取决于编译器，int就是用来表达寄存器的
    // long：取决于编译器
    // long long ：8字节
    double ff=1E-10;
    printf("%E,%.16f\n",ff,ff);
    //   %.n 表示要输出小数点后几位
    // 科学计数法： -5.6E-9表示 −5.6×10^9 

    printf("%f\n",12.0 / 0.0);
    printf("%f\n",-12.0 / 0.0);
    printf("%f\n",0.0 / 0.0);
     
    //printf 输出inf:表示超过范围的浮点数
    //       输出nan表示不存在的浮点数

    float d ,b, c;

    d = 1.345f;//后面加f或F表明这是float，否则带小数点的默认为double
    b = 1.123f;
    c = d + b;
    if (c == 2.468)
        printf("相等\n");
    else
        printf("不相等,c=%.10f,或%f\n",c,c);

    
    return 0;
}