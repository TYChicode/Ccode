#include <stdio.h>
//弄俱计N块眖 N 秨﹍┕计10案计(N)

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
