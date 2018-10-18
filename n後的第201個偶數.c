#include <stdio.h>
//請讀取一個整數 N，並且輸出從N開始算起第201個偶數(包含N)

int main(){
	int n,i;
	scanf ("%d",&n);
	if (n%2 == 0) printf("%d",n + 2 *200);
	else printf("%d",n + 1 + 2 *200);
	return 0;
}

//2018/10/7 finish
