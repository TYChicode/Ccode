#include <stdio.h>
//寫一支程式讀取學生的一個分數(整數)，並顯示出對應的成績級數
int main(){
	int n;
	scanf("%d",&n);
	if (n >= 80 & n<= 100){
	printf ("A");
	}
	else if (n >= 70 & n< 80){
	printf ("B");
	}
	else if (n >= 60 & n< 70){
	printf ("C");
	}
	else if (n < 60){ 
	printf ("F");
	}
	return 0;
}

//2018/10/1 finish 
