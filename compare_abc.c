#include <stdio.h>
int main()
{
    printf("请输入你想比较的三个数：");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max;


    if(a>b){
        if(a>c)
        max=a;
        else{
            max=c;
        }
    }else{
        if(b>=c)
        max=b;
        else{
            max=c;
        }

    }
    printf("最大的数为：%d\n",max);
    return 0;
}