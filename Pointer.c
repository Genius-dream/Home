#include <stdio.h>
int main(){
	int number = 10;
	int *p;
	p = &number;
	
	printf("变量number的值是:%d\n",*p);
	*p = 20;
	printf("变量number的值是:%d\n",number);
	
	return 0;
}