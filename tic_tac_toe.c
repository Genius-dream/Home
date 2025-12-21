#include <stdio.h>
int main(){
	const int size = 3;
	int board[size][size];
	int i = 0;
	int j = 0;
	int numOfO = 0;
	int numOfX = 0;
	int result = -1;//-1还没有人赢，1X赢，0O赢,2平局
	
	//读入矩阵
	printf("请输入3×3矩阵（9个数字，用空格分隔）：\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	}

	//检查行
	for(i=0;i<size && result == -1;i++){//外层循环控制行号
		
		for (j=0;j<size;j++){
			numOfO = numOfX= 0;
			if(board[i][j] == 1)
			numOfX ++;
			else if(board[i][j] == 0)
			numOfO ++;
		
		}
		if (numOfO == size){
			result = 0;
		}else if(numOfX == size){
			result = 1;
		}
	}
	//检查列
	if(result == -1){
	
	for(j=0;j<size;j++){
		numOfO = numOfX = 0;
		for(i=0;i<size;i++){
			if(board[i][j] == 1)
				numOfX++;
			else if(board[i][j] == 0)	
		        numOfO++;
		   
		}
		
		if(numOfO == size)
		    result = 0;
		else if(numOfX == size)
		    result = 1;
		
	    }
    }
    
    //检查主对角线
    if(result == -1){
    	numOfO = numOfX = 0;
    	for(i=0;i<size;i++){
    		if(board[i][i] == 1)
    			numOfX++;
    		else if(board[i][i] == 0)
    		    numOfO++;
    		
		}

	if(numOfO == size)
	    result = 0;
	else if(numOfX == size)
	    result = 1;
    }
    //检查副对角线
    if(result == -1){
    		numOfO = numOfX = 0;    		
    	for(i=0;i<size;i++){
    		if(board[i][size-i-1]==1)
    		numOfX++;
    		else if(board[i][size-i-1]==0)
    		numOfO++;
		
		}
		
	if(numOfO ==size)
		result = 0;
	else if(numOfX == size)
		result = 1;	
	}
	
	if(result == -1){
		int numOfEmpty = 0;
		for(i=0;i<size;i++){
			for(j=0;j<size;j++){
				if(board[i][j]==2)
				numOfEmpty++;				
			}
		}
		if(numOfEmpty == 0)
		result = 2;
	}

	
    
	if(result ==1)
	 printf("X WIN!\n");
	else if(result ==0) 
	 printf("O WIN!\n");
	else if(result ==2)
	 printf("DRAW!\n");
	else
	 printf("UNFINISHED!\n");
	 
	return 0; 
}