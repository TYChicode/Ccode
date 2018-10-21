#include <stdio.h>
//計算並印出在M到N之間是X的倍數的總和(包含M,N)

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
