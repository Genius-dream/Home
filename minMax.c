#include <stdio.h>

void minmax(int a[],int len,int *max,int *min)
{
	int i ;
	*min = *max = a[0];
	for (i=1;i<len;i++){
		if(a[i]<*min){
			*min = a[i];
		}
		if(a[i] >*max){
			*max = a[i];
		}
	}
}

int main(void){
	int a[] = {1,2,3,4,5,8,7,73,45,88,41,};
	int min,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&max,&min);
	printf("min=%d,max=%d\n",min,max);
	
	return 0;
}