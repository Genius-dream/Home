#include <stdio.h>
// int main(){
//     //count
//     int a,b;
//     int min;

//     scanf_s("%d %d",&a,&b);
//     if (a<b){
//         min = a;
//     }else{
//         min = b;
//     }

//     int ret = 0;
//     int i;
//     //这里从1开始，是当ab无最大公约数，仍显示1
//     for ( i=1;i<min;i++){
//         if(a%i == 0){
//             if(b%i == 0){
//                 ret = i;//如果求最小公约数，此处break
//             }
//         }
//     }
//     printf("%d和%d的最大公约数是%d.\n",a,b,ret);
//     return 0;
// }


//逻辑运算写法

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);

//     int i;
//     int ret = 0;
//或者先取最小的 int min=a < b ?a : b;
//     for(i=1;i<a && i<b;i++){
//         if( a%i == 0 && b%i == 0)
//                 ret = i;
//         } 
//     printf("%d和%d的最大公约数是%d.\n",a,b,ret);
//     return 0;
// }

//辗转相除法（最高效） 计算a/b的余数，让a=b,b=余数 
 int main(){
     int a,b;
     int t;//找一个容器装余数
     scanf("%d %d", &a,&b);
     while (b != 0){
         t = a % b;
         a = b;
         b = t;
    }
     printf("gcd=%d\n", a);

    return 0;
 }

