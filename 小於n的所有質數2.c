#include <stdio.h>
//列出1~n的所有質數

int main(){
	int n,x,y;
	printf("請輸入一正整數：");
	scanf("%d",&n);
	if (n == 1){
		printf("無質數"); 
	}
	else if(n >= 2){
		printf("1~n的所有質數：");
		if (n == 2){
			printf ("2");
		}
		printf ("2 ");
		for(x = 2;x <= n;x++){
			for (y = 2;y < x;y++){
				if (x%y == 0) {
				break;
				}
				if (x == y+1)
				printf ("%d ",x);
			}
		}
	}
	
	return 0;
}

//2018/10/1 finish
