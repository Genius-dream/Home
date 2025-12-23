#include <stdio.h>
//指针使用场景2：
//返回不属于有效范围内的值来表示异常出错（-1或0）
int divide(int a, int b,double *result)
{
	int ret = 1;
	if(b == 0)
	ret = 0;
	else
	*result = (double)a/b;
	return ret;
}
int main(void){
	int a = 5;
	int b = 2;
	double c;
	if(divide(a,b,&c))
	printf("%d/%d=%.2f\n",a,b,c);
	
	return 0;
}