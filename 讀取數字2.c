#include <stdio.h>
//�g�@��{����J�P������~�Z(1�Ӿ��)�A�ھڤU��L�X�L���Z�ļ���(1�Ӿ��)
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
