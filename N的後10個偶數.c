#include <stdio.h>
//Ū���@�Ӿ��N�A�ÿ�X�q N �}�l����ƪ�10�Ӱ���(�]�tN)

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
