#include <stdio.h>
//讀取一個整數N，並輸出從 N 開始往後數的10個偶數(包含N)

int main(){
	int N,i,n;
	scanf("%d",&N);
	if (N%2 == 0){
		for (i = 0;i <=9;i++){
			n = N + 2*i;
			printf("%d ",n);
		}	
	}
	
	else {
		for (i = 0;i <=9;i++){
			n = N + 1 + 2*i;
			printf("%d ",n);
		}
	}
	return 0;
} 

//2018/10/7 finish
