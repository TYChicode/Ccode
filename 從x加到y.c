#include <stdio.h>
//寫一隻C語言程式讀入兩個整數(x,y) 並且計算 x 加到 y 的總和(包含x,y兩數)

int main(){
	int x,y,i,n = 0;
	scanf("%d %d",&x,&y);
	if (x <= y){
		for (i = x;i <=y;i++){
			n = n + i;
		}
		printf("%d",n);
	}
	return 0;
}

//2018/10/7 finish
