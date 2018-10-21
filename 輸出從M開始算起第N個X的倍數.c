#include <stdio.h>
//輸出從M開始算起第N個X的倍數(包含M)

int main(){
	int m,n,x,i = 0,val;
	scanf ("%d %d %d",&m,&n,&x);
	while (m%x != 0) m++;
	val = (n-1) * x + m;
	printf ("%d",val);
	return 0;
}

//2018/10/21 finished
