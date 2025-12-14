#include <stdio.h>
int max(int a, int b){
    int ret;
    if(a > b){
        ret=a;
    }else{
        ret= b;
    }
    
    return ret;//如果函数有返回值(即非void函数)，必须有带值的return

}

//MAX函数
int main(){
    int a,b,c;
    a = 5;
    b = 6;
    c = max(10,12);
    c = max(a,b);
    c = max((c,23),6);
    
   printf("%d\n",c);

   return 0;
}