#include <stdio.h>

// 正确：接收地址
void change(int *p) {  // p是一个"地址纸条"
    *p = 100;  // 去地址指向的地方，改成100
}

int main() {
    int a = 10;
    printf("修改前: a = %d\n", a);  // 10
    
    change(&a);  // 传递a的地址
    
    printf("修改后: a = %d\n", a);  // 100！成功了！
    return 0;
}