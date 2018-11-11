#include <stdio.h>
#include <string.h>

//°j¤å 

int main(){
	int num,n,k,j,length;
	scanf ("%d",&num);
	char data0[50],data1[50];
	for (k = 1;k <= num;k++){
		for (j = 1;j <= 50;j++){
			data0[j] = 0;
			data1[j] = 0;
		}
		scanf ("%s",data0);
		length = strlen (data0);
		for (j = 0;j < length;j++){
			data1[j] = data0[length-1-j];
		}
		n = strcmp (data0,data1);
		if (n == 0) printf ("yes\n");
		else printf ("no\n");
	}
	return 0;
}

//2018/11/7 finish
