#include<stdio.h>
//x,y,z�T�ƥѤp�ƨ�j

int main(){
	int x,y,z,n;
	printf("enter the first value�G");
	scanf("%d",&x);
	printf("enter the second value�G");
	scanf("%d",&y);
	printf("enter the third value�G");
	scanf("%d",&z);
	if (x>y){
		n = y;
		y = x;
		x = n;		
	}
	if (y>z){
		n = z;
		z = y;
		y = n;
	}
	if (x>y){
		n = y;
		y = x;
		x = n;		
	}
	printf("small to big�G\n%d\n%d\n%d",x,y,z);
	return 0;
}

//2018/9/30 finish 
