#include <stdio.h>
//寫一支程式讀取一個整數，判斷他是不是2、3、5的倍數

int main(){
	int n;
	scanf ("%d",&n);
	if (n%2 == 0) printf ("Ture ");
	else printf ("False ");
	
	if (n%3 == 0) printf ("Ture ");
	else printf ("False ");
	
	if (n%5 == 0) printf ("Ture ");
	else printf ("False ");
	return 0;
}

//2018/10/1 finish 
