#include <stdio.h>
/*
依照M的值(ABCD)印出N層的三角形
A:    B:     C:   D:
*     ***    ***    *
**    **      **   **
***   *        *  ***

*/
int main(){
	int n,i,k,j;
	char m,a = 'A',b = 'B',c = 'C',d = 'D';
	scanf ("%d %c",&n,&m);
	if (m == a){
		for (i = 1;i <= n;i++){
			for (k = 1;k <= i;k++) printf ("*");
		printf ("\n");
		}
	}
	if (m == b){
		for (i = n;i >= 1;i--){
			for (k = i;k >= 1;k--) printf ("*");
		printf ("\n");
		}
	}
	if (m == c){
		for (i = n;i >= 1;i--){
			for (k = i;k >= 1;k--) printf ("*");
		printf ("\n");
			for (j = 0;j <= n-i;j++) printf (" ");
		}
	}
	if (m == d){
		for (i = 1;i <= n;i++){
			for (j = 1;j <= n-i;j++) printf (" ");
			for (k = 1;k <= i;k++) printf ("*");
		printf ("\n");
		}
	}
	return 0;
}
