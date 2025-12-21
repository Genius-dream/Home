#include <stdio.h>
//埃拉托斯特尼筛法（筛法求素数）
int main(){
	const int maxNumber = 25;//找25以内的素数
	int isPrime[maxNumber];//创建布尔数组，是就返回1，不是就返回0
	int i;
	int x;
	
	for(i = 0;i<maxNumber; i++){
    	isPrime[i] = 1;//先假设都是，tag为1
	}
	for (x = 2; x<maxNumber;x++){
		if(isPrime[x]){//如果x是素数
			for (i=2;i*x<maxNumber;i++){//从两倍开始找
				isPrime[i*x] = 0;//将素数的倍数标记为非素数
			}
		}
	}
	for(i = 2;i<maxNumber;i++){
		if(isPrime[i] == 1){
			printf("%d\t",i);
		}
	}
	printf("\n");
	return 0;
}