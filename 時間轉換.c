#include<stdio.h>
//�N��J������ন�u �ѡG�p�ɡG���G��v

int main(){
	int sec,day,hour,minute,second;
	scanf("%d",&sec);
	second = sec%60;
	minute = sec/60%60;
	hour = sec/3600%24;
	day = sec/86400;
	printf("�ѡG�p�ɡG���G��\n%d�G%d�G%d�G%d",day,hour,minute,second);
	return 0;
} 

//2018/9/30 finish
