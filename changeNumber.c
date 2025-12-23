#include <stdio.h>
//指针使用场景1：要返回多个值
void swap(int *pa,int *pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

int main(){
	int a = 5;
	int b = 6;
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	
	return 0;
}
