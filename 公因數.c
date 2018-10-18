#include <stdio.h>
//列出n的所有因數

 int main(){
 	int n,k;
 	printf("請輸入一正整數：");
 	scanf("%d",&n);
 	printf("n的因數：");
 	for (k = 1;k <= n;k++){
 		if (n%k == 0){
 			printf("%d ",k);
		 }
	 }
	return 0;
 }
 
 //2018/9/30 finish
