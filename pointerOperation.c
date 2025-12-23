//指数运算
#include <stdio.h>

int main(void){
	char ac[] = {0,12,3,1,4,4,5,3,2,-1
	};
	char *p = ac;//指向数组第一个单元
    char *c = &ac[6];
    while(*p !=-1){
        printf("%d\n",*p++);
    }
    printf("c-p=%d\n",c - p);//指针相减，结果是两个指针之间相差的元素个数
    printf("c-=2=%d\n",c-=2);
    printf("p = %p\n",p);
    printf("p + 1=%p\n",p+1);//加了一个sizeof
    //*(p+n)等价于ac[n]等价于p[n]
    printf("p[2]= %d\n",p[2]);

	return 0;
}