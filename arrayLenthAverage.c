#include <stdio.h>
//将数组传递给函数--函数接收到的是指向数组第一个元素的指针，因此必须同时传递数组长度
//arr是指针，size是数组长度
double Average(int *arr,int size){
	if(size <= 0){
		return 0.0;//避免除零
	}


int sum = 0;
for(int i=0;i<size;i++){
	sum +=arr[i];
	//下标语法：等价于*(arr+i),表示访问数组 arr中第 i个元素的值
	//数组本身不存储长度信息，所以必须通过某种方式告诉函数数组在哪里结束。
	// sizeof只能在数组定义的作用域内使用，不能在函数内部使用，因为数组作为参数传递时会退化为指针。
    }
    
    return (double)sum / size;
}

int main(){
	int numbers[]={10,20,30,40,50,};
	int length = sizeof(numbers)/sizeof(numbers[0]);
	
	double avg = Average(numbers,length);//传递数组名（即首地址）和长度
    //
	// 对于基本类型 length，如果需要修改它的值，才需要传递 &length
	printf("数组的平均值是：%.2f\n",avg);
	
	return 0;
}