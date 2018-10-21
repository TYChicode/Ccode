#include <stdio.h>
//輸出從 M 開始往後數的N個偶數(包含M)

int main(){
	int m,n,i,val=0;
	scanf ("%d %d",&m,&n);
	if (m%2!=0) m = m+1;
    for (i=1;i<=n;i++){
        val = m+2*(i-1);
        printf ("%d ",val);
    }
    return 0;
}

//2018/10/21 finished
