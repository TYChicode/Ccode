#include <stdio.h>
//寫一支程式輸入銷售員的業績(1個整數)，根據下表印出他的績效獎金(1個整數)
int main(){
	int n;
	int num;
	scanf("%d",&n);

	if (n > 15000){
		num = n*0.2;
	}
	else if (n > 10000 & n <= 15000){
		num = n*0.15;
	}
	else if (n >5000 & n<= 10000){
		num = n*0.1;
	}
	else if (n <= 5000){ 
		num = n*0;
	}
	printf("%d",num);
	return 0;
}

//2018/10/1 finish 
