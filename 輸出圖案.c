#include <stdio.h>
//��J�@�Ӿ�ƨÿ�X�H�U�Ϯ�
 /*      1
        222
       33333
      4444444
     555555555
         .
         . 
         .
*/

int main(){
	int n,x,y,z;
	printf("Please enter an integer�G");
	scanf("%d",&n);
	for(x = 1;x <= n;x++){
		for(z = n-x;z >= 1;z--){
			printf(" ");
		}
		for(y = 1;y <= 2*x-1;y++){
			printf("%d",x);
		}
		printf("\n");
	}
	return 0;
}

//2018/9/30 finish
