#include <stdio.h>
//�g�@��C�y���{��Ū�J��Ӿ��(x,y) �åB�p�� x �[�� y ���`�M(�]�tx,y���)

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
