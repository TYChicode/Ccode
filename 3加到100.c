#include <stdio.h>
//寫一隻程式計算 3+6+9+...+300並輸出

int main(){
	int i,n;
	for (i = 1;i <=100;i++){
		n = n + 3*i;
	}	
	printf("%d ",n);
	return 0;
} 

//2018/10/7 finish
