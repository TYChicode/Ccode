#include <stdio.h>
//�C�X�en�ӽ��
 
int main(){
	int n,i,x;
	scanf ("%d",&n);
	for (x = 2;n > 0;x++){
		int var = 0;
		for (i = 2;i < x;i++){
			if (x%i == 0)var++;
		}
		if (var == 0){
			printf ("%d ",x);
			n--;
		}
	}
	return 0;
}

//2018/9/30 finish(cover) 
