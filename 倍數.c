#include <stdio.h>
//寫一隻程式讀取兩個數字，判斷第一個數字是不是第二個數字的倍數。

int main(){
	int num1,num2;
	scanf("%d",&num1);
	scanf("%d",&num2);
	if (num1%num2 == 0)
	printf("Ture");
	else
	printf("False");
	return 0;
} 

//2018/10/1 finish 
