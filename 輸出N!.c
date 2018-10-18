#include <stdio.h>
//寫一隻程式讀取一個正整數N，並計算N!之數值

int main(){
	int x,i,n = 1;
	scanf("%d",&x);
	for (i = 1;i <=x;i++){
		n = n * i;
		}
	printf("%d",n);
	return 0;
}

//2018/10/7 finish
