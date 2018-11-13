#include <stdio.h>

int main(){
	int n,k,num,j,i,var;
	scanf ("%d",&n);
	for (k = 1;k <= n;k++){
		scanf ("%d",&num);
		if (num == 1){
			printf ("N");
		}
		else {
			var = 0;
			for (j = 2;j < num;j++){	
				if (num % j == 0){
					var++;
					break;
				}
			}
			if (var == 0){
				printf ("Y");
			}
			else printf ("N");
		}
		printf ("\n");
	}
	return 0;
}
