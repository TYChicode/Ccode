#include <stdio.h>
//��X�qM�}�l��_��N��X������(�]�tM)

int main(){
	int m,n,x,i = 0,val;
	scanf ("%d %d %d",&m,&n,&x);
	while (m%x != 0) m++;
	val = (n-1) * x + m;
	printf ("%d",val);
	return 0;
}

//2018/10/21 finished
