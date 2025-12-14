#include <stdio.h>
int main(){
    int a,n;
    scanf_s("%d %d",&a,&n);
    int i;
    int sum = 0;
    int t =0;//记住先赋初始值，不要一开始就赋为a
    
    for(i = 0;i <n ;i++){
            t = t*10+a;
            sum +=t;
    }
    printf("sum=%d\n",sum);
    return 0;
}