#include <stdio.h>


int isPrime(int x,int knownPrimes[],int number0fKnownPrimes)
{
	int ret = 1;//先假设读进来的是素数
	int i;
	for(i = 0;i<number0fKnownPrimes;i++){
		if(x % knownPrimes[i] ==0){
			ret = 0;//能被整除的不是素数
			break;
		}
	}
	return ret;
	
}

int main(void){
	const int number = 100;
	int prime[number];
	prime[0]=2;
	int count = 1;
	int i = 3;
	while (count <number){
		if(isPrime(i,prime,count)){
			prime[count ++] =i;//如果是素数就存进数组里，素数数量+1
	}
	i++;//继续判断下一个数
	}
	//打印素数表要求
	int j;
	for(j=0;j<number;j++){
		printf("%d",prime[j]);
		if((j+1)%5 !=0) 
		 printf("\t");
		else
		 printf("\n");
		
	}
	return 0;
	}