#include <stdio.h>
//�p��æL�X�bM��N�����OX�����ƪ��`�M(�]�tM,N)

int main(){
	int m,n,x,i,val = 0;
	scanf("%d %d %d",&m,&n,&x);
	for (i = m;i <= n;i++){
		if (i%x == 0){
			val = val + i;
		}
	}
	printf ("%d",val);
	return 0;
} 

//2018/10/21 finished
