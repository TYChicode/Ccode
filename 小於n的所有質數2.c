#include <stdio.h>
//�C�X1~n���Ҧ����

int main(){
	int n,x,y;
	printf("�п�J�@����ơG");
	scanf("%d",&n);
	if (n == 1){
		printf("�L���"); 
	}
	else if(n >= 2){
		printf("1~n���Ҧ���ơG");
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
